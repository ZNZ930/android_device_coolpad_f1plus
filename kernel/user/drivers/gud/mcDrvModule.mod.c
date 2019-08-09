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
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9800b29, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x3ac6ade0, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x7b5c8440, __VMLINUX_SYMBOL_STR(vm_munmap) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x39a3d0ed, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd5d2ac01, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x92bfe3b2, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xa37b2ff9, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x122c9ef5, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x7b054a7a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x61b3d406, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x95476790, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x76fd5a90, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x3c484e1, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x952ecf67, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x583564f1, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xec454f1e, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x6e959ef3, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xab0431ab, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0xeee9706f, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xef15bd96, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x24858c58, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xb1913f29, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc50334a5, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x15ccd6f2, __VMLINUX_SYMBOL_STR(is_vmalloc_addr) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x3b608668, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x71252ba1, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef2b1b09, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x6ccf7bd7, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x832344a3, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xdfabe0ff, __VMLINUX_SYMBOL_STR(scm_call) },
	{ 0x47ef038f, __VMLINUX_SYMBOL_STR(scm_call2) },
	{ 0x32c3ca87, __VMLINUX_SYMBOL_STR(v7_dma_flush_range) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x650bb6fa, __VMLINUX_SYMBOL_STR(is_scm_armv8) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf28b96a0, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x704c486a, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0x87d71539, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x3b644ddb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6a512dd0, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xae2120f9, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xcd98a1e9, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x2a511e5e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

