#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x25b289fd, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x634508b5, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x68e2f221, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x98e48b48, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf77339be, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xdca0356f, __VMLINUX_SYMBOL_STR(pcie_set_readrq) },
	{ 0x98441464, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0xc1bb94fa, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x17c1a1a0, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x22bce513, __VMLINUX_SYMBOL_STR(mdio_mii_ioctl) },
	{ 0xcf1d4e80, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x642b5480, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf0ae9964, __VMLINUX_SYMBOL_STR(pcie_get_readrq) },
	{ 0x1d109846, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x206a972e, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6ef892a4, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf002f68d, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x37f7144f, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb228632c, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x41382ae8, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x3e7e7a58, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x83a17210, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf97456ea, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc2d51e0a, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2d37c1c4, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x88553706, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xeaaadc3f, __VMLINUX_SYMBOL_STR(__pci_enable_wake) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x88cbd515, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x57c9b75e, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x2477524, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x321b8122, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc5e3438e, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xc5cddeaa, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x5e7ab819, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xbc8f4448, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x6090b345, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xa34112a5, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xfbf71b20, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xeac6a644, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa3cd2743, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x6b38d16d, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x83eb2a1b, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x67f7403e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x281911b5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x1269752d, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x21fb443e, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa7a9bb1a, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbbd9bbd2, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x593b435f, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x38928293, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe61d2a6a, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x52719af8, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x76e61f0e, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0xb5d62a82, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9cc730de, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5de775b1, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xdb1addab, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd09e85ef, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0xd63bc373, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xd8eb9dc5, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8d1c5b64, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x110421a1, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0xd3e25705, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0xb00cb132, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xdcfacfca, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xb7fb57e1, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xdf60209c, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x39804588, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mdio";

MODULE_ALIAS("pci:v00001969d00001091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A0sv*sd*bc*sc*i*");
