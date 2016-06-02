sudo rmmod usb-minimal
make
sudo cp /home/gilles/Codes/hello/usb-minimal.ko /lib/modules/4.4.0-22-generic/kernel/drivers/usb/misc/
sudo depmod -a
sudo modprobe usb-minimal
