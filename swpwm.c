/******************************************************************************
 *
 * Module: PWM
 *
 * File Name: pwm.c
 *
 * Description: Source file for the PWM driver
 *
 * Author: Menna Saeed
 *
 *******************************************************************************/

#include <avr/io.h>
#include "swpwm.h"

/*******************************************************************************
 *                      Functions Definitions                                  *
 *******************************************************************************/
/*Description:
  * frequency_kh: is an input argument that describes the frequency in KHz.
 * dutyCycle: is an input argument that describes the duty cycle needed for the PWM that varies from 0 to 100 ( 0 means 0%, and 100 means 100%).
 */
 */
void SWPWM_init(uint32_t frequency_kh, uint8_t dutyCycle);
{
	TIM1_CNT = 0; // Set Timer Initial Value to 0
	DIO_init(PWM_OUTPUT_PIN_ID, PWM_OUTPUT_PORT_ID, PIN_OUTPUT); 
	
	TIM1_PSC = (1<<PSC) ;
  
}

void SWPWM_start(void)
{
	OCR0  = duty_cycle;

	TCCR0|=(1<<CS01);
}

void SWPWM_changeDutyCycle(uint8_t newDutyCycle)


 void SWPWM_stop(stop)
 {
 
 }
