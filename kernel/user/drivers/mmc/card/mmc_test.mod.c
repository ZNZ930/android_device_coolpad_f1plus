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
	{ 0x262be00, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xb9aa72fb, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1dbecf53, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xcb625c59, __VMLINUX_SYMBOL_STR(mmc_unregister_driver) },
	{ 0xda72a37b, __VMLINUX_SYMBOL_STR(mmc_register_driver) },
	{ 0x1424f59, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x8371daff, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x92706d3a, __VMLINUX_SYMBOL_STR(mmc_set_blocklen) },
	{ 0x6ccf7bd7, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0xef2b1b09, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x64ac1b1f, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x7f2ebece, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x286dfa69, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x92601cae, __VMLINUX_SYMBOL_STR(mmc_start_req) },
	{ 0x46608fa0, __VMLINUX_SYMBOL_STR(getnstimeofday) },
	{ 0x89fb272, __VMLINUX_SYMBOL_STR(mmc_can_trim) },
	{ 0xa5157616, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x35e3bc02, __VMLINUX_SYMBOL_STR(mmc_erase) },
	{ 0x2fd89bfe, __VMLINUX_SYMBOL_STR(mmc_can_erase) },
	{ 0xe6da44a, __VMLINUX_SYMBOL_STR(set_normalized_timespec) },
	{ 0x2a511e5e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcd98a1e9, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x76a9bed, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xf28b96a0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x13e2902a, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2917b213, __VMLINUX_SYMBOL_STR(mmc_rpm_release) },
	{ 0xa16a6733, __VMLINUX_SYMBOL_STR(mmc_release_host) },
	{ 0x3b644ddb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf8de8e73, __VMLINUX_SYMBOL_STR(__mmc_claim_host) },
	{ 0xfac642e6, __VMLINUX_SYMBOL_STR(mmc_rpm_hold) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe2735f3f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x64d7e1a6, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6faf70f5, __VMLINUX_SYMBOL_STR(mmc_can_reset) },
	{ 0x53f5f0e8, __VMLINUX_SYMBOL_STR(mmc_hw_reset_check) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x63896d70, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeadf2879, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xf10e20f1, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x3b608668, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x71252ba1, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

