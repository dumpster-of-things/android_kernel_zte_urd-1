/*
 * fusb301.h -- FUSB301 USB TYPE-C Controller device driver
 *
 * Copyright (C) 2015 Fairchild semiconductor Co.Ltd
 * Author: Chris Jeong <chris.jeong@fairchildsemi.com>
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */

#ifndef __FUSB301_H__
#define __FUSB301_H__

#define FUSB301_ATTACH	1
#define FUSB301_DETACH	0

#define TYPEC_CHIP_SEL_NONE    0
#define TYPEC_CHIP_SEL_ONE	      1

enum fusb301_type{
	FUSB301_TYPE_NONE = 0,
	FUSB301_TYPE_AUDIO,
	FUSB301_TYPE_DEBUG,
	FUSB301_TYPE_POWER_ACC,
	FUSB301_TYPE_SOURCE,
	FUSB301_TYPE_SINK
};

enum fusb301_bc_lvl{
	FUSB301_BC_LVL_RA = 0,
	FUSB301_BC_LVL_USB,
	FUSB301_BC_LVL_1P5,
	FUSB301_BC_LVL_3A
};

/***************************************************************
** the value : TypecChipSel
** the value equals TYPEC_CHIP_SEL_NONE means typec chip is not registered;
** the value equals TYPEC_CHIP_SEL_ONE means typec chip has been registered;
** modified by zhenghuan 2015-08-18
***************************************************************/
extern int TypecChipSel;

#endif

