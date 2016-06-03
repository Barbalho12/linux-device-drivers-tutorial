#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/module.h>
#include <linux/kref.h>
#include <linux/uaccess.h>
#include <linux/usb.h>
#include <linux/mutex.h>

MODULE_LICENSE("Dual BSD/GPL");


#define VENDOR_ID	0x2341
#define PRODUCT_ID	0x0043


static const struct usb_device_id table[] = {
	{ USB_DEVICE(VENDOR_ID, PRODUCT_ID) },
	{ }
};
MODULE_DEVICE_TABLE(usb, table);


static int myprobe(struct usb_interface *interface, const struct usb_device_id *id) {
	printk(KERN_INFO "Probe()\n");
	return 0;
}

static void mydisconnect(struct usb_interface *interface){
	printk(KERN_INFO "Disconnect()\n");
}

static void mydraw_down(struct usb_skel *dev){
	printk(KERN_INFO "DrawDown()\n");
}

static int mysuspend(struct usb_interface *intf, pm_message_t message) {
	printk(KERN_INFO "Suspend()\n");
	return 0;
}

static int myresume(struct usb_interfae *intf){
	printk(KERN_INFO "Resume()\n");
	return 0;
}


static int mypre_reset(struct usb_interfae *intf){
	printk(KERN_INFO "Pre_reset()\n");
	return 0;
}


static int mypost_reset(struct usb_interfae *intf){
	printk(KERN_INFO "Post_reset()\n");
	return 0;
}



static struct usb_driver mydriver = {
	.name =		"mydriver",
	.probe =	myprobe,
	.disconnect = 	mydisconnect,
	.suspend = 	mysuspend,
	.resume =	myresume,
	.pre_reset = 	mypre_reset,
	.post_reset = 	mypost_reset,
	.id_table = 	table,
	.supports_autosuspend = 1,
};

module_usb_driver(mydriver);

