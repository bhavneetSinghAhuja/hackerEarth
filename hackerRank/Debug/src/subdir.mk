################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AboveAverage.cpp \
../src/BrokenKeyboard.cpp \
../src/CuttingPaper.cpp \
../src/MiceV1.cpp \
../src/PinProblem1.cpp \
../src/Rabbit.cpp \
../src/test.cpp 

OBJS += \
./src/AboveAverage.o \
./src/BrokenKeyboard.o \
./src/CuttingPaper.o \
./src/MiceV1.o \
./src/PinProblem1.o \
./src/Rabbit.o \
./src/test.o 

CPP_DEPS += \
./src/AboveAverage.d \
./src/BrokenKeyboard.d \
./src/CuttingPaper.d \
./src/MiceV1.d \
./src/PinProblem1.d \
./src/Rabbit.d \
./src/test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


