################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Nested\ Template\ class\ (Attempt\ Two).cpp 

OBJS += \
./src/Nested\ Template\ class\ (Attempt\ Two).o 

CPP_DEPS += \
./src/Nested\ Template\ class\ (Attempt\ Two).d 


# Each subdirectory must supply rules for building sources it contributes
src/Nested\ Template\ class\ (Attempt\ Two).o: ../src/Nested\ Template\ class\ (Attempt\ Two).cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Nested Template class (Attempt Two).d" -MT"src/Nested\ Template\ class\ (Attempt\ Two).d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


