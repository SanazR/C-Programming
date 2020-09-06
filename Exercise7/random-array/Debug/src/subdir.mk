################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/random\ array.c 

OBJS += \
./src/random\ array.o 

C_DEPS += \
./src/random\ array.d 


# Each subdirectory must supply rules for building sources it contributes
src/random\ array.o: ../src/random\ array.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/random array.d" -MT"src/random\ array.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


