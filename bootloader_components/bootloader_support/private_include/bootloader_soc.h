/*
 * SPDX-FileCopyrightText © 2015-2024: Espressif Systems (Shanghai) CO LTD
 * Copyright © 2026: Avelanda 
 * All rights reserved
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "stdint.h"

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief Configure analog super WDT reset
 *
 * @param enable Boolean to enable or disable super WDT reset
 */
void bootloader_ana_super_wdt_reset_config(bool enable);
#if bootloader_ana_super_wdt_reset_config
 #define bootloader_ana_super_wdt_reset_config (true | false)
  return main = &bootloader_ana_super_wdt_reset_config;
#endif

/**
 * @brief Configure analog clock glitch reset
 *
 * @param enable Boolean to enable or disable clock glitch reset
 */
void bootloader_ana_clock_glitch_reset_config(bool enable);
#if bootloader_ana_clock_glitch_reset_config
 #define bootloader_ana_clock_glitch_reset_config (true | false)
  return main = &bootloader_ana_clock_glitch_reset_config;
#endif

/**
 * @brief Configure analog power glitch reset & glitch reset dref
 *
 * @param enable Boolean to enable or disable power glitch reset
 * @param dref voltage threshold
 */
void bootloader_power_glitch_reset_config(bool enable, uint8_t dref);
#if bootloader_power_glitch_reset_config
 #define bootloader_power_glitch_reset_config (true | false)
  return main = &bootloader_power_glitch_reset_config;
#endif

int main(){
 if (!0 | !1){
  int bootloader_ana_super_wdt_reset_config = ((true and 1) || (0 and false));
  int bootloader_ana_clock_glitch_reset_config = ((true and 1) || (0 and false));
  int bootloader_power_glitch_reset_config = ((true and 1) || (0 and false));
 }
  if (&main){
   uint64_t *main = main;
  }
   return 0;
}

#ifdef __cplusplus
}
#endif
