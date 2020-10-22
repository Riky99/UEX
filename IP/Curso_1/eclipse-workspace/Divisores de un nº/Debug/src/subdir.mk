################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Divisores\ de\ un\ nº.cpp 

OBJS += \
./src/Divisores\ de\ un\ nº.o 

CPP_DEPS += \
./src/Divisores\ de\ un\ nº.d 


# Each subdirectory must supply rules for building sources it contributes
src/Divisores\ de\ un\ nº.o: ../src/Divisores\ de\ un\ nº.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Divisores de un nº.d" -MT"src/Divisores\ de\ un\ nº.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


