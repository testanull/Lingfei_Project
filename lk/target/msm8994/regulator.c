/* Copyright (c) 2014-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Fundation, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <regulator.h>
#include <rpm-ipc.h>
#include <bits.h>
#include <debug.h>

static uint32_t ldo2[][11]=
{
	{
		LDOA_RES_TYPE, 2,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_DISABLE,
		KEY_MICRO_VOLT, 4, 0,
		KEY_CURRENT, 4, 0,
	},

	{
		LDOA_RES_TYPE, 2,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_ENABLE,
		KEY_MICRO_VOLT, 4, 1250000,
		KEY_CURRENT, 4, 16,
	},
};

static uint32_t ldo12[][11]=
{
	{
		LDOA_RES_TYPE, 12,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_DISABLE,
		KEY_MICRO_VOLT, 4, 0,
		KEY_CURRENT, 4, 0,
	},

	{
		LDOA_RES_TYPE, 12,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_ENABLE,
		KEY_MICRO_VOLT, 4, 1800000,
		KEY_CURRENT, 4, 11,
	},
};

static uint32_t ldo14[][11]=
{
	{
		LDOA_RES_TYPE, 14,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_DISABLE,
		KEY_MICRO_VOLT, 4, 0,
		KEY_CURRENT, 4, 0,
	},

	{
		LDOA_RES_TYPE, 14,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_ENABLE,
		KEY_MICRO_VOLT, 4, 1800000,
		KEY_CURRENT, 4, 52,
	},
};

static uint32_t ldo28[][14]=
{
	{
		LDOA_RES_TYPE, 28,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_DISABLE,
		KEY_MICRO_VOLT, 4, 0,
		KEY_CURRENT, 4, 0,
	},

	{
		LDOA_RES_TYPE, 28,
		KEY_SOFTWARE_ENABLE, 4, GENERIC_ENABLE,
		KEY_MICRO_VOLT, 4, 1000000,
		KEY_CURRENT, 4, 72,
	},

};

void regulator_enable(uint32_t enable)
{
	if (enable & REG_LDO2)
		rpm_send_data(&ldo2[GENERIC_ENABLE][0], 36, RPM_REQUEST_TYPE);

	if (enable & REG_LDO12)
		rpm_send_data(&ldo12[GENERIC_ENABLE][0], 36, RPM_REQUEST_TYPE);

	if (enable & REG_LDO14)
		rpm_send_data(&ldo14[GENERIC_ENABLE][0], 36, RPM_REQUEST_TYPE);

	if (enable & REG_LDO28)
		rpm_send_data(&ldo28[GENERIC_ENABLE][0], 36, RPM_REQUEST_TYPE);
}

void regulator_disable(uint32_t enable)
{
	if (enable & REG_LDO2)
		rpm_send_data(&ldo2[GENERIC_DISABLE][0], 36, RPM_REQUEST_TYPE);

	if (enable & REG_LDO12)
		rpm_send_data(&ldo12[GENERIC_DISABLE][0], 36, RPM_REQUEST_TYPE);

	if (enable & REG_LDO14)
		rpm_send_data(&ldo14[GENERIC_DISABLE][0], 36, RPM_REQUEST_TYPE);

	if (enable & REG_LDO28)
		rpm_send_data(&ldo28[GENERIC_DISABLE][0], 36, RPM_REQUEST_TYPE);
}
