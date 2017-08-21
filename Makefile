obj-$(CONFIG_ALX) += alx.o
alx-objs := main.o ethtool.o hw.o
#ccflags-y += -D__CHECK_ENDIAN__
kern-ver := $(shell pacman -Qs linux | grep 'local/linux ' | awk '{print $$2}')-ARCH

all:
	make -C /lib/modules/$(kern-ver)/build M=$(shell pwd) modules

install:
	gzip alx.ko
	sudo mv alx.ko.gz /lib/modules/$(kern-ver)/kernel/drivers/net/ethernet/atheros/alx

clean:
	rm *.ko *.o .*.o.* .*.ko.* .tmp_versions modules.order Module.symvers alx.mod.c -fr
