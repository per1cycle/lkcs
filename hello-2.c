#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("per1cycle");

static int __init hello_init(void){
    printk(KERN_INFO "Hello from simple kernel module.\n");
    return 0;
}

static void __exit hello_exit(void){
    printk(KERN_WARNING "Exiting module.\n");
}

module_init(hello_init);
module_exit(hello_exit);
