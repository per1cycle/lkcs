/**
 * Simple kernel server.
 */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>

#include <linux/socket.h>

#include <linux/kthread.h>

#include <net/sock.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("per1cycle");
MODULE_DESCRIPTION("A simple server module for 6.6");
MODULE_VERSION("0.1");

#define MAX_CONN 8
#define SERVER_REPLY_MSG "Hello, reply from kserver.\n"
static const int port = 8989;
static const int max_conn_cnt = 10;


struct kserver{
    int running;
    struct socket conn_sock[MAX_CONN];
    struct task_struct threads[MAX_CONN];
};

struct kserver *server;

void kserver_listen(void){
    
}

int kserver_start(void){
    server = kmalloc(sizeof(struct kserver), GFP_KERNEL);
    memset(server, 0, sizeof (struct kserver));

    server->running = 1;

    for(;;){
        
    }

    return 0;
}
static int __init server_init(void)
{
    pr_info("Server is Initializing.\nDon't panic.\n");

    kserver_start();
    
    return 0;
}

static void __exit server_exit(void)
{
    pr_info("Server shutdown successfully.\n");
}

module_init(server_init);
module_exit(server_exit);