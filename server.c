/**
 * Simple kernel client server.
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>

#include <linux/socket.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("per1cycle");
MODULE_DESCRIPTION("A simple server module for 6.6");
MODULE_VERSION("0.1");

static int __init server_init(void)
{
    pr_info("Server is Initializing.\nDon't panic.\n");

    return 0;
}

static void __exit server_exit(void)
{

    pr_info("Server shutdown successfully.\n");

}

module_init(example_init);
module_exit(example_exit);