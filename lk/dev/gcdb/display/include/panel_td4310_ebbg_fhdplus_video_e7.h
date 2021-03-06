/* Copyright (c) 2015-2016, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _PANEL_TD4310_EBBG_FHDPLUS_VIDEO_E7_H_

#define _PANEL_TD4310_EBBG_FHDPLUS_VIDEO_E7_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config td4310_ebbg_fhdplus_video_e7_panel_data = {
  "qcom,mdss_dsi_td4310_ebbg_fhdplus_video_e7", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution td4310_ebbg_fhdplus_video_e7_panel_res = {
  1080, 2160, 130, 26, 2, 0, 4, 54, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info td4310_ebbg_fhdplus_video_e7_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char td4310_ebbg_fhdplus_video_e7_on_cmd0[] = {
0x02, 0x00, 0x39, 0xC0,
0x11, 0x00, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd1[] = {
0x02, 0x00, 0x29, 0xC0,
0xB0, 0x04, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd2[] = {
0x02, 0x00, 0x29, 0xC0,
0xD6, 0x01, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd3[] = {
0x27, 0x00, 0x29, 0xC0,
0xC7, 0x00, 0x10, 0x1C,
0x2C, 0x3A, 0x45, 0x5D,
0x6F, 0x7D, 0x8A, 0x3E,
0x4B, 0x5B, 0x71, 0x7B,
0x88, 0x98, 0xA5, 0xB1,
0x00, 0x10, 0x1C, 0x2C,
0x3A, 0x45, 0x5D, 0x6F,
0x7D, 0x8A, 0x3E, 0x4B,
0x5B, 0x71, 0x7B, 0x88,
0x98, 0xA5, 0xB1, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4[] = {
0x15, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0x03,
0x01, 0x03, 0xFC, 0x00,
0x00, 0x03, 0xFE, 0xFE,
0xFC, 0x00, 0x00, 0x01,
0xFE, 0xFB, 0xFC, 0x00,
0x00, 0xFF, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_1[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x01, 0xBB, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFF, 0xB1, 0x00,
0x00, 0xFA, 0x02, 0x01,
0xBD, 0x00, 0x00, 0x01,
0x05, 0x03, 0xFC, 0x00,
0x00, 0xFC, 0x04, 0xFE,
0xE3, 0x00, 0x00, 0xFA,
0x02, 0xFF, 0xFB, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0x9F, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_2[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xFA,
0x02, 0x01, 0xDD, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFB,
0x04, 0xFD, 0xD5, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xD4, 0x00, 0x00, 0xFE,
0x05, 0x03, 0xEE, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x04, 0x02,
0xDD, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xA4, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_3[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFE, 0x04, 0x01,
0xD4, 0x00, 0x00, 0xFD,
0x03, 0xFE, 0xF7, 0x00,
0x00, 0xFA, 0x02, 0xFF,
0xD3, 0x00, 0x00, 0xFE,
0x04, 0x01, 0xA5, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x03, 0x02,
0x9A, 0x00, 0x00, 0xFC,
0x03, 0x01, 0xAA, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_4[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x04, 0x02,
0xAE, 0x00, 0x00, 0xFD,
0x03, 0xFD, 0xF9, 0x00,
0x00, 0xFA, 0x02, 0xFF,
0xD3, 0x00, 0x00, 0xFF,
0x03, 0x02, 0x80, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x03, 0x01,
0x79, 0x00, 0x00, 0xFC,
0x03, 0xFF, 0xAE, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_5[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x03, 0x01,
0x87, 0x00, 0x00, 0xFD,
0x03, 0x01, 0x83, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0xFF,
0x03, 0x02, 0x7C, 0x00,
0x00, 0xFD, 0x03, 0x01,
0xAD, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x03, 0x02,
0x59, 0x00, 0x00, 0xFD,
0x02, 0x02, 0x46, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_6[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x04, 0x02,
0xBB, 0x00, 0x00, 0xFC,
0x03, 0xFF, 0xB9, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0xFE,
0x04, 0x01, 0xB3, 0x00,
0x00, 0xFC, 0x04, 0xFE,
0xE4, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x03, 0x01,
0x88, 0x00, 0x00, 0xFC,
0x03, 0x01, 0x73, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_7[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xBF, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFD,
0x03, 0xFF, 0xFA, 0x00,
0x00, 0xF9, 0x02, 0x01,
0x91, 0x00, 0x00, 0xFE,
0x04, 0x01, 0xCE, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x05, 0x04,
0xF4, 0x00, 0x00, 0xFC,
0x04, 0xFE, 0xE0, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_8[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x02, 0x78, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFD,
0x03, 0xFE, 0xF9, 0x00,
0x00, 0xFA, 0x01, 0x03,
0x4E, 0x00, 0x00, 0xFF,
0x04, 0x01, 0xD0, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xC2, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x04, 0xFE, 0xE7, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_9[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x04, 0x01,
0xC7, 0x00, 0x00, 0xFC,
0x03, 0x01, 0x7A, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0xFF,
0x04, 0x01, 0xBF, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xA7, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x03, 0x01,
0x96, 0x00, 0x00, 0xFD,
0x02, 0x02, 0x3A, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_10[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x03, 0x02,
0xA7, 0x00, 0x00, 0xFC,
0x03, 0x01, 0x7F, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0x01,
0x03, 0x02, 0x9E, 0x00,
0x00, 0xFC, 0x03, 0xFF,
0xAA, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x03, 0x02,
0x77, 0x00, 0x00, 0xFD,
0x02, 0x03, 0x40, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_11[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x03, 0x01,
0x67, 0x00, 0x00, 0xFD,
0x03, 0x01, 0x87, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0xFE,
0x03, 0x01, 0x5B, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xB1, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x02, 0x02,
0x3B, 0x00, 0x00, 0xFC,
0x03, 0x01, 0x4B, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_12[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x02, 0x03,
0x46, 0x00, 0x00, 0xFD,
0x03, 0x02, 0x8B, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0x01,
0x02, 0x02, 0x39, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xB5, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x02, 0x01,
0x1E, 0x00, 0x00, 0xFC,
0x03, 0x02, 0x50, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_13[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x01, 0xFA, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xB1, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0x01,
0x05, 0x03, 0xF8, 0x00,
0x00, 0xFC, 0x04, 0xFE,
0xE0, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x04, 0x01,
0xC7, 0x00, 0x00, 0xFC,
0x03, 0x02, 0x68, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_14[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFE, 0x05, 0x01,
0xDD, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xB6, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0x01,
0x04, 0x01, 0xD7, 0x00,
0x00, 0xFC, 0x04, 0xFE,
0xE2, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x04, 0x01,
0xA7, 0x00, 0x00, 0xFC,
0x03, 0x02, 0x6D, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_15[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x03, 0x02,
0x9A, 0x00, 0x00, 0xFC,
0x03, 0xFF, 0xBC, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0xFF,
0x03, 0x01, 0x90, 0x00,
0x00, 0xFC, 0x04, 0xFD,
0xE7, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x03, 0x02,
0x68, 0x00, 0x00, 0xFC,
0x03, 0x01, 0x77, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_16[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x03, 0x01,
0x78, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xC0, 0x00,
0x00, 0xF9, 0x02, 0xFF,
0xFC, 0x00, 0x00, 0x01,
0x03, 0x02, 0x6B, 0x00,
0x00, 0xFC, 0x04, 0xFE,
0xE9, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x02, 0x03,
0x48, 0x00, 0x00, 0xFD,
0x03, 0x02, 0x7B, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_17[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x02, 0x79, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFF, 0xB2, 0x00,
0x00, 0xF9, 0x02, 0x02,
0x78, 0x00, 0x00, 0x01,
0x05, 0x03, 0xFC, 0x00,
0x00, 0xFC, 0x04, 0xFE,
0xE2, 0x00, 0x00, 0xFA,
0x02, 0x01, 0xBD, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFD, 0xA1, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_18[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x01, 0x9C, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFB,
0x04, 0xFD, 0xD5, 0x00,
0x00, 0xFA, 0x02, 0x02,
0x8F, 0x00, 0x00, 0xFE,
0x05, 0x03, 0xF0, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0x01, 0xDF, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xC4, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_19[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x01, 0xC0, 0x00,
0x00, 0x01, 0x04, 0x02,
0xDA, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xFC, 0x00,
0x00, 0xF9, 0x02, 0x02,
0x92, 0x00, 0x00, 0xFE,
0x04, 0x02, 0xA8, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0x01, 0x04, 0x01,
0xD3, 0x00, 0x00, 0xFC,
0x04, 0xFF, 0xE2, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_20[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x01, 0xC0, 0x00,
0x00, 0xFF, 0x04, 0x01,
0xB5, 0x00, 0x00, 0xFB,
0x03, 0xFE, 0xFC, 0x00,
0x00, 0xF9, 0x02, 0x01,
0x94, 0x00, 0x00, 0x01,
0x03, 0x01, 0x85, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xFC, 0x00,
0x00, 0xFF, 0x04, 0x02,
0xAF, 0x00, 0x00, 0xFB,
0x04, 0xFD, 0xE5, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_21[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xFA,
0x01, 0x02, 0x37, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xB3, 0x00,
0x00, 0xF9, 0x01, 0x01,
0x34, 0x00, 0x00, 0x01,
0x05, 0x03, 0xFC, 0x00,
0x00, 0xFD, 0x03, 0xFF,
0xE2, 0x00, 0x00, 0xF9,
0x02, 0x02, 0x7C, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xA2, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_22[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xFA,
0x01, 0x02, 0x57, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xD5, 0x00,
0x00, 0xFA, 0x01, 0x03,
0x4A, 0x00, 0x00, 0x01,
0x05, 0x03, 0xF1, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xFA,
0x01, 0x01, 0xA0, 0x00,
0x00, 0x01, 0x05, 0x03,
0xFC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xC4, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_23[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x02, 0x7C, 0x00,
0x00, 0x01, 0x04, 0x02,
0xDC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xFC, 0x00,
0x00, 0xFA, 0x01, 0x03,
0x51, 0x00, 0x00, 0xFF,
0x04, 0x02, 0xAB, 0x00,
0x00, 0xFC, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xF9,
0x02, 0xFF, 0xD4, 0x00,
0x00, 0x01, 0x04, 0x02,
0xEC, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xFC, 0x00, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd4_24[] = {
0x38, 0x00, 0x29, 0xC0,
0xC8, 0x01, 0x00, 0xF9,
0x02, 0x02, 0x7E, 0x00,
0x00, 0x01, 0x04, 0x02,
0xB7, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xFC, 0x00,
0x00, 0xFA, 0x01, 0x02,
0x55, 0x00, 0x00, 0x01,
0x03, 0x01, 0x89, 0x00,
0x00, 0xFD, 0x03, 0xFE,
0xFC, 0x00, 0x00, 0xFA,
0x02, 0x01, 0xD3, 0x00,
0x00, 0xFF, 0x04, 0x01,
0xC7, 0x00, 0x00, 0xFC,
0x03, 0xFE, 0xFC, 0x00, };


static char td4310_ebbg_fhdplus_video_e7_on_cmd5[] = {
0x02, 0x00, 0x39, 0xC0,
0x51, 0xff, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd6[] = {
0x02, 0x00, 0x39, 0xC0,
0x53, 0x24, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd7[] = {
0x02, 0x00, 0x39, 0xC0,
0x55, 0x00, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd8[] = {
0x02, 0x00, 0x39, 0xC0,
0x35, 0x00, 0xFF, 0xFF, };

static char td4310_ebbg_fhdplus_video_e7_on_cmd9[] = {
0x02, 0x00, 0x39, 0xC0,
0x29, 0x00, 0xFF, 0xFF, };

static struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x1c, td4310_ebbg_fhdplus_video_e7_on_cmd4, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_01[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_02[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_2, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_03[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_3, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_04[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_4, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_05[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_06[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_07[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_08[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_09[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_9, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_10[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_10, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_11[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_11, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_12[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_12, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_13[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_13, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_14[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_14, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_15[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_15, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_16[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_16, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_17[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_17, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_18[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_18, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_19[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_19, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_20[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_20, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_21[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_21, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_22[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_22, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_23[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_23, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};

struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_on_command_24[] = {
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd0, 0x78},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd1, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd2, 0x00},
{0x2c, td4310_ebbg_fhdplus_video_e7_on_cmd3, 0x00},
{0x3c, td4310_ebbg_fhdplus_video_e7_on_cmd4_24, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd5, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd6, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd7, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd8, 0x00},
{0x08, td4310_ebbg_fhdplus_video_e7_on_cmd9, 0x14},
};


#define TD4310_EBBG_FHDPLUS_VIDEO_E7_ON_COMMAND 10


static char td4310_ebbg_fhdplus_video_e7_off_cmd0[] = {
0x02, 0x00, 0x39, 0xC0,
0x28, 0x00, 0xFF, 0xFF, };


static char td4310_ebbg_fhdplus_video_e7_off_cmd1[] = {
0x02, 0x00, 0x39, 0xC0,
0x10, 0x00, 0xFF, 0xFF, };



static struct mipi_dsi_cmd td4310_ebbg_fhdplus_video_e7_off_command[] = {
{ 0x8 , td4310_ebbg_fhdplus_video_e7_off_cmd0, 0x14},
{ 0x8 , td4310_ebbg_fhdplus_video_e7_off_cmd1, 0x78}
};
#define TD4310_EBBG_FHDPLUS_VIDEO_E7_OFF_COMMAND 2


static struct command_state td4310_ebbg_fhdplus_video_e7_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info td4310_ebbg_fhdplus_video_e7_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info td4310_ebbg_fhdplus_video_e7_video_panel = {
  0, 0, 0, 0, 1, 1, 1, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration td4310_ebbg_fhdplus_video_e7_lane_config = {
  4, 0, 1, 1, 1, 1, 0
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t td4310_ebbg_fhdplus_video_e7_timings[] = {
  //0xE6, 0x38, 0x26, 0x00, 0x68, 0x6e, 0x2A, 0x3c, 0x44, 0x03, 0x04, 0x00
  0xE7, 0x36, 0x24, 0x00, 0x66, 0x6a, 0x2A, 0x3a, 0x2d, 0x03, 0x04, 0x00
};

static struct panel_timing td4310_ebbg_fhdplus_video_e7_timing_info_8937 = {
  //0, 4, 0x20, 0x2c
   0, 4, 0x03, 0x2d
};

static const uint32_t td4310_ebbg_fhdplus_14nm_video_e7_timings[] = {
	0x19, 0x1f, 0x9, 0xa, 0x6, 0x3, 0x4, 0xa0,
  0x19, 0x1f, 0x9, 0xa, 0x6, 0x3, 0x4, 0xa0,
  0x19, 0x1f, 0x9, 0xa, 0x6, 0x3, 0x4, 0xa0,
  0x19, 0x1f, 0x9, 0xa, 0x6, 0x3, 0x4, 0xa0,
	0x19, 0x1e, 0x8, 0xa, 0x6, 0x3, 0x4, 0xa0,
};

static struct panel_timing td4310_ebbg_fhdplus_video_e7_timing_info = {
  //0, 4, 0x20, 0x2c
   0, 4, 0x0e, 0x34
};

static struct panel_reset_sequence td4310_ebbg_fhdplus_video_e7_panel_reset_seq = {
{ 1, 0, 1}, { 5, 5, 30 }, 2
};

/*---------------------------------------------------------------------------*/
/* Dynamic fps supported frequencies by panel                                */
/*---------------------------------------------------------------------------*/
static const struct dfps_panel_info td4310_ebbg_fhdplus_video_e7_dfps = {
	1, 13, {48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60}
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight td4310_ebbg_fhdplus_video_e7_backlight = {
  1, 1, 4095, 100, 1, "PMIC_8941"
};

#define TD4310_EBBG_FHDPLUS_VIDEO_E7_SIGNATURE 0xFFFF

#endif /*_TRULY_1080P_VIDEO_H_*/
