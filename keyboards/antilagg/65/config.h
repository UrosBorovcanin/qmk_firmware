// Copyright 2022 Uros Borovcanin (@UrosBorovcanin)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define FORCE_NKRO

#define WS2812_PIO_USE_PIO1
#define RGBLED_NUM 67
#define RGB_MATRIX_LED_COUNT RGBLED_NUM

#define ENCODERS_PAD_A { GP21 }
#define ENCODERS_PAD_B { GP22 }

#define ENCODER_RESOLUTION 2
