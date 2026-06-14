#include <linux/module.h>
#include <linux/kernel.h>
 
int __init myhello_init(void)
{
         printk("==========user hello mod init=========\n");
         return 0;
}
 
void __exit myhello_exit(void)
{
 
         printk("===========user hello mod exit=========\n");
}
 
MODULE_LICENSE("GPL");
module_init(myhello_init);
module_exit(myhello_exit);
