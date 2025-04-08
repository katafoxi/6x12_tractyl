// Copyright 2024 TODO (@TODO)
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


// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 300

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Enable LED Indicators
// https://docs.qmk.fm/features/led_indicators
#define LED_CAPS_LOCK_PIN GP22

#define LED_PIN_ON_STATE 1
