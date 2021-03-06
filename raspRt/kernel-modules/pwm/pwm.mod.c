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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7ee338c6, "module_layout" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x54c0d161, "rtdm_timer_stop" },
	{ 0xbe89b392, "rtdm_tbase" },
	{ 0xfe990052, "gpio_free" },
	{ 0x7c90281a, "rtdm_timer_destroy" },
	{ 0xe2018731, "rtdm_timer_start" },
	{ 0x328a05f1, "strncpy" },
	{ 0x69dbf1d5, "__xntimer_init" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x27e1a049, "printk" },
	{ 0x432fd7f6, "__gpio_set_value" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1897015E05760FA030FFD24");
