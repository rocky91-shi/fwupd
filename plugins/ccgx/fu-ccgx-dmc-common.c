/*
 * Copyright (C) 2020 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#include "config.h"

#include "fu-ccgx-dmc-common.h"

gchar *
fu_ccgx_dmc_version_to_string (guint32 val)
{
	return g_strdup_printf ("%u.%u.%u.%u",
				(val >> 24) & 0xff,
				(val >> 16) & 0xff,
				(val >> 8) & 0xff,
				(val) & 0xff);
}

gchar *
fu_ccgx_dmc_update_model_to_string (DmcUpdateModel val)
{
	if (val == DMC_UPDATE_MODEL_UNKNOWN)
		return "Update Model  Unknown";
	if (val == DMC_UPDATE_MODEL_DOWNLOAD_TIRGGER)
		return "Update Model Download Trigger";
	if (val == DMC_UPDATE_MODEL_PENDING_RESET)
		return "Update Model Pending Reset";
	return NULL;

}
