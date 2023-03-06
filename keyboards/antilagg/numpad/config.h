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
#define FORCE_NKRO

#define WS2812_PIO_USE_PIO1
#define RGBLED_NUM 17
#define RGB_MATRIX_LED_COUNT RGBLED_NUM

#define ENCODERS_PAD_A { GP3 }
#define ENCODERS_PAD_B { GP7 }

#define ENCODER_RESOLUTION 2

#undef I2C_DRIVER
#define I2C_DRIVER I2CD1
#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP5
#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP4
