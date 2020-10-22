################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Celsius\ a\ Fahrenheit.cpp 

OBJS += \
./src/Celsius\ a\ Fahrenheit.o 

CPP_DEPS += \
./src/Celsius\ a\ Fahrenheit.d 


# Each subdirectory must supply rules for building sources it contributes
src/Celsius\ a\ Fahrenheit.o: ../src/Celsius\ a\ Fahrenheit.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Celsius a Fahrenheit.d" -MT"src/Celsius\ a\ Fahrenheit.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


