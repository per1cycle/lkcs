#include <linux/kernel.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

int init_module(void){
    printk(KERN_INFO "Hello from simple kernel module.\n");
    return 0;
}

int exit_module(void){
    printk(KERN_WARNING "Exiting module.\n");
    return 0;
}