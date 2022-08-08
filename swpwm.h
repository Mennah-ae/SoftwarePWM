



/******************************************************************************
 *
 * Module: PWM
 *
 * File Name: pwm.h
 *
 * Description: header file for the PWM driver
 *
 * Author: Menna Saeed
 *
 *******************************************************************************/

#ifndef PWM_H_
#define PWM_H_

#include "gpio.h"

/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define PWM_OUTPUT_PORT_ID     PORTA_ID
#define PWM_OUTPUT_PIN_ID      PIN0_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*
 * frequency_kh: is an input argument that describes the frequency in KHz.
 * dutyCycle: is an input argument that describes the duty cycle needed for the PWM that varies from 0 to 100 ( 0 means 0%, and 100 means 100%).
 */
 void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle);

/*
 * This function is to start PWM generation.
 */
 void SWPWM_start(void);
 
/*
 * newDutyCycle: is an input argument that describes the new duty cycle needed for the PWM.
 */
 void SWPWM_changeDutyCycle(uint8_t newDutyCycle);
 
 /*
 * This function is to stop PWM generation.
 */
 void SWPWM_stop(stop);

#endif /* PWM_H_ */
Footer
