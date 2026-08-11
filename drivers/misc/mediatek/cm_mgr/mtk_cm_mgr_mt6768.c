// SPDX-License-Identifier: GPL-2.0
/*
 * Minimal mt6768 CM manager perf hooks for the common 4.19 tree.
 */

#include <linux/export.h>

void cm_mgr_perf_platform_set_status(int enable)
{
}
EXPORT_SYMBOL_GPL(cm_mgr_perf_platform_set_status);

void cm_mgr_perf_platform_set_force_status(int enable)
{
}
EXPORT_SYMBOL_GPL(cm_mgr_perf_platform_set_force_status);
