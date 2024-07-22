/**
 * Simple linue kernel server client.
 * 
 */
#include <linux/init.h>
#include <linux/module.h>


static int __init client_init(void){
    pr_info("Client init.\n");
    return 0;
}

static void __exit client_exit(void){
    pr_info("Client exit.\n");

}

module_init(client_init);
module_exit(client_exit);