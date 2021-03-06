/*
 *  (C) Copyright 2010,2011
 *  NVIDIA Corporation <www.nvidia.com>
 *  (C) Copyright 2011
 *  Avionic Design GmbH <www.avionic-design.de>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#include <asm/io.h>
#include <asm/gpio.h>
#include <asm/arch/tegra2.h>
#ifdef CONFIG_TEGRA2_MMC
#include <mmc.h>
#endif

#ifdef CONFIG_TEGRA2_MMC
/*
 * Routine: gpio_config_mmc
 * Description: Set GPIOs for SD card
 */
void gpio_config_mmc(void)
{
	/* configure pin as input for card detect */
	gpio_request(GPIO_PH2, "SD4 CD");
	gpio_direction_input(GPIO_PH2);
}
#endif
