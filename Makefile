obj-$(CONFIG_ALX) += alx.o
alx-objs := main.o ethtool.o hw.o
ccflags-y += -D__CHECK_ENDIAN__

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules

install:
	gzip alx.ko
	sudo mv alx.ko.gz /lib/modules/$(shell uname -r)/kernel/drivers/net/ethernet/atheros/alx

clean:
	rm *.ko *.o .*.o.* .*.ko.* .tmp_versions modules.order Module.symvers alx.mod.c -fr
