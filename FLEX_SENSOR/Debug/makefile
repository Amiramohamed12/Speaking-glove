################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
FLEX_SENSOR.lss \

FLASH_IMAGE += \
FLEX_SENSOR.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: FLEX_SENSOR.elf secondary-outputs

# Tool invocations
FLEX_SENSOR.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,FLEX_SENSOR.map -mmcu=atmega32 -o "FLEX_SENSOR.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

FLEX_SENSOR.lss: FLEX_SENSOR.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S FLEX_SENSOR.elf  >"FLEX_SENSOR.lss"
	@echo 'Finished building: $@'
	@echo ' '

FLEX_SENSOR.hex: FLEX_SENSOR.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex FLEX_SENSOR.elf  "FLEX_SENSOR.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: FLEX_SENSOR.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 FLEX_SENSOR.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) FLEX_SENSOR.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
