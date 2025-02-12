/*
 * ADC_REG.h
 *
 *  Created on: Oct 21, 2023
 *      Author: lenovo
 */

#ifndef MCAL_ADC_ADC_REG_H_
#define MCAL_ADC_ADC_REG_H_

#define ADMUX  (*((volatile uint8_t *)0x27))
#define ADCSRA (*((volatile uint8_t *)0x26))
#define ADCH   (*((volatile uint8_t *)0x25))
#define ADCL   (*((volatile u16 *)0x24))
#define SFIOR  (*((volatile uint8_t *)0x50))
//#define SFIOR  (*((volatile uint8_t *)0x26))
#endif /* MCAL_ADC_ADC_REG_H_ */
