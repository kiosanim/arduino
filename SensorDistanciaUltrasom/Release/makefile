################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include arduino/core/avr-libc/subdir.mk
-include arduino/core/subdir.mk
-include Libraries/Ultrasonic/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/arduino.ar \

ELF += \
SensorDistanciaUltrasom.elf \

EEP += \
SensorDistanciaUltrasom.eep \

FLASH_IMAGE += \
SensorDistanciaUltrasom.hex \


# All Target
all: SensorDistanciaUltrasom

# Tool invocations
SensorDistanciaUltrasom: $(FLASH_IMAGE)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-size" -A "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/SensorDistanciaUltrasom.elf"
	@echo 'Finished building target: $@'
	@echo ' '

/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar" rcs "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/arduino.ar"   $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

SensorDistanciaUltrasom.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc" -Os -Wl,--gc-sections -mmcu=atmega328p -o "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/SensorDistanciaUltrasom.elf"   $(LINK_OBJ) $(AR)  "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/arduino.ar" "-L/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

SensorDistanciaUltrasom.eep: $(ELF)
	@echo 'Create eeprom image'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-objcopy" -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/SensorDistanciaUltrasom.elf" "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/SensorDistanciaUltrasom.eep"
	@echo 'Finished building: $@'
	@echo ' '

SensorDistanciaUltrasom.hex: $(EEP)
	@echo 'Create Flash image (ihex format)'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-objcopy" -O ihex -R .eeprom "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/SensorDistanciaUltrasom.elf" "/Users/sartori/Documents/workspace_arduino/SensorDistanciaUltrasom/Release/SensorDistanciaUltrasom.hex"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(C_DEPS)$(AR)$(EEP)$(FLASH_IMAGE)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(INO_DEPS)$(SIZEDUMMY)$(ELF)$(CPP_DEPS) SensorDistanciaUltrasom
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
