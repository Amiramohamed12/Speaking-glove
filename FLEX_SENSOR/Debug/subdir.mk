################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ADC_PROG.c \
../DIO_PROG.c \
../USRAT_prog.c \
../lcd_proj.c \
../main.c 

OBJS += \
./ADC_PROG.o \
./DIO_PROG.o \
./USRAT_prog.o \
./lcd_proj.o \
./main.o 

C_DEPS += \
./ADC_PROG.d \
./DIO_PROG.d \
./USRAT_prog.d \
./lcd_proj.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


