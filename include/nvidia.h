/* File: nvidia.h
 *
 * Copyright (c) 2011 Amir Aupov <fads93@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef XFCE4_SENSORS_NVIDIA_H
#define XFCE4_SENSORS_NVIDIA_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

/* Gtk/Glib includes */
#include <glib.h>
#include <NVCtrl/NVCtrl.h>

/**
 * Initialize nvidia sensor
 * @param chips: Pointer to pointer array to chips
 * @return number of detected chip features
 */
int initialize_nvidia (GPtrArray *arr_ptr_chips);

/**
 * Refresh an nvidia chip's feature
 * @param chip_feature: Pointer to chip feature to refresh
 * @param data: currently unused
 */
void refresh_nvidia (gpointer ptr_chipfeature, gpointer ptr_unused);

/**
 * Read the temperature value from GPU
 * @param gpu: index of GPU to read its value
 * @return temperature value
 */
double get_nvidia_value (int gpu);

#endif /* XFCE4_SENSORS_NVIDIA_H */
