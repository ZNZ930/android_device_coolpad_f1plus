#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa2b0497d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5fa22458, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd6b543b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x7b853237, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x3b608668, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd9800b29, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x837d0f0a, __VMLINUX_SYMBOL_STR(down_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x25e6d2a4, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xeee9706f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcab1f5c3, __VMLINUX_SYMBOL_STR(mobicore_map_vmem) },
	{ 0x5199bdbf, __VMLINUX_SYMBOL_STR(mobicore_unmap_vmem) },
	{ 0xa327a94e, __VMLINUX_SYMBOL_STR(mobicore_free_wsm) },
	{ 0x399b7be0, __VMLINUX_SYMBOL_STR(mobicore_allocate_wsm) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x953c9a95, __VMLINUX_SYMBOL_STR(mobicore_release) },
	{ 0x8964272e, __VMLINUX_SYMBOL_STR(mobicore_open) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2ee2b40c, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x1f8657f0, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf28b96a0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1c05052a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x3b644ddb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2a511e5e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x76fd5a90, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xa9606add, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0xcd98a1e9, __VMLINUX_SYMBOL_STR(dev_err) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcDrvModule";

