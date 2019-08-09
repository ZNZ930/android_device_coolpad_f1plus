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
	{ 0xa3a4f707, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xe7664524, __VMLINUX_SYMBOL_STR(platform_driver_register) },
	{ 0x5e1c262b, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xda06b099, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xe0e33f27, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x9cbb895, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c3d2d0c, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x2507789a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

