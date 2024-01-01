################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/vec\ add.c 

OBJS += \
./src/vec\ add.o 

C_DEPS += \
./src/vec\ add.d 


# Each subdirectory must supply rules for building sources it contributes
src/vec\ add.o: ../src/vec\ add.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/vec add.d" -MT"src/vec\ add.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


