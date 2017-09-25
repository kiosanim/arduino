################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
../SensorDistanciaUltrasom.ino 

LINK_OBJ += \
./SensorDistanciaUltrasom.ino.o 

INO_DEPS += \
./SensorDistanciaUltrasom.ino.d 


# Each subdirectory must supply rules for building sources it contributes
SensorDistanciaUltrasom.ino.o: ../SensorDistanciaUltrasom.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++" -c -g -Os -w -fno-exceptions -ffunction-sections -fdata-sections -MMD -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=156-r2 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR    -I"/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/cores/arduino" -I"/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/avr/variants/standard" -I"/Applications/Arduino.app/Contents/Resources/Java/libraries/Ultrasonic" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -D__IN_ECLIPSE__=1 -x c++ "$<"  -o  "$@"
	@echo 'Finished building: $<'
	@echo ' '


