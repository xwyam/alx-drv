obj-$(CONFIG_ALX) += alx.o
alx-objs := main.o ethtool.o hw.o
ccflags-y += -D__CHECK_ENDIAN__

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

clean:
	rm *.ko *.o .*.o.* .*.ko.* .tmp_versions modules.order Module.symvers -fr
