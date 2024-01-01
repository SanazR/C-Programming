################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Sum\ and\ Product.c 

OBJS += \
./src/Sum\ and\ Product.o 

C_DEPS += \
./src/Sum\ and\ Product.d 


# Each subdirectory must supply rules for building sources it contributes
src/Sum\ and\ Product.o: ../src/Sum\ and\ Product.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Sum and Product.d" -MT"src/Sum\ and\ Product.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


