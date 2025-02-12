
#ifndef MCAL_ADC_ADC_INT_H_
#define MCAL_ADC_ADC_INT_H_

#define ADC_CHANNEL_0                  0
#define ADC_CHANNEL_1                  1
#define ADC_CHANNEL_2                  2
#define ADC_CHANNEL_3                  3
#define ADC_CHANNEL_4                  4
#define ADC_CHANNEL_5                  5
#define ADC_CHANNEL_6                  6
#define ADC_CHANNEL_7                  7

void ADC_voidInit(void);

uint8_t   ADC_u8GetDigitalValue(uint8_t Copy_u8ChannelNb, u16 * Copy_pu16DigitalValue);

#endif /* MCAL_ADC_ADC_INT_H_ */
