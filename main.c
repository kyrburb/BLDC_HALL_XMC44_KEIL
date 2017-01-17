/*******************************************************************************
 Copyright (c) 2015-2016, Infineon Technologies AG                                 **
 All rights reserved.                                                         **
                                                                              **
 Redistribution and use in source and binary forms, with or without           **
 modification,are permitted provided that the following conditions are met:   **
                                                                              **
 *Redistributions of source code must retain the above copyright notice,      **
 this list of conditions and the following disclaimer.                        **
 *Redistributions in binary form must reproduce the above copyright notice,   **
 this list of conditions and the following disclaimer in the documentation    **
 and/or other materials provided with the distribution.                       **
 *Neither the name of the copyright holders nor the names of its contributors **
 may be used to endorse or promote products derived from this software without**
 specific prior written permission.                                           **
                                                                              **
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"  **
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE    **
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE   **
 ARE  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE   **
 LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR         **
 CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF         **
 SUBSTITUTE GOODS OR  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS    **
 INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN      **
 CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)       **
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE   **
 POSSIBILITY OF SUCH DAMAGE.                                                  **
                                                                              **
 To improve the quality of the software, users are encouraged to share        **
 modifications, enhancements or bug fixes with Infineon Technologies AG       **
 dave@infineon.com).                                                          **
                                                                              **
********************************************************************************
**                                                                            **
**                                                                            **
** PLATFORM : Infineon XMC4400 Series                                         **
**                                                                            **
** AUTHOR : Motor Control  R&D Team                                      **
**                                                                            **
** version 1.0.0  Initial version                                             **
**                                                                            **
** MODIFICATION DATE : August 31, 2016                                           **
**                                                                            **
*******************************************************************************/

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/

#include "xmc_common.h"
#include "bldc_scalar_user_interface.h"
/**
@brief
This example project controls 3-phase BLDC motor with 3 hall sensor feedback using block commutation control algorithm.
This is configured for Infineon low voltage motor control kit KIT_XMC44_AE3_001 with Nanotec motor part number DB42S03

A list of APIs is provided to control the motor and change the configurations
 - Motor0_BLDC_SCALAR_MotorStart
 - Motor0_BLDC_SCALAR_MotorStop
 Below APIs are for speed control. Similar APIs are available for voltage control and current control.
 - BLDC_SCALAR_SetSpeedVal
 - BLDC_SCALAR_SetSpeedProportionalGain
 - BLDC_SCALAR_SetSpeedIntegralGain
 */

/* Default configuration:
 * Infineon low voltage motor control kit KIT_XMC44_AE3_001 with Nanotec motor
 * Control scheme: BLDC_SCALAR_SPEED_CTRL
 * PWM modulation: BLDC_SCALAR_PWM_HIGHSIDE
 * PWM frequency: 20000Hz
 * Speed set: 2000 RPM
 * Ramp up and ramp down rate: 500 RPM/s
 * Over-current protection with direct DC link current measurement
 */
/* Change of configurations:
 * Control algorithm configurations are in the Configuration/bldc_scalar_user_config.h file.
 * MCU HW resources configurations are in the Configuration/bldc_scalar_mcuhw_config.h file.
 * DAC peripheral is initialized in single value mode to generate 1.65V and it is used for generating
 * bias voltage for current amplifier. (KIT_XMC44_AE3_001 does not have current amplifier bias voltage)
 */
int main(void)
{
  /* Initialization */
  Motor0_BLDC_SCALAR_Init();
  /* Start the motor */
  Motor0_BLDC_SCALAR_MotorStart();
  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while (1U)
  {
  }

}
