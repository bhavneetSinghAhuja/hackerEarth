################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ChefAndGround.cpp \
../src/FATCHEF.cpp \
../src/Factoriz.cpp \
../src/PRPOTION.cpp \
../src/Prladdu.cpp \
../src/SeptemberLunchTimeChefAndEasyProblem.cpp \
../src/SeptemberLunchTimeChefAndEasyProblem2.cpp \
../src/test.cpp 

OBJS += \
./src/ChefAndGround.o \
./src/FATCHEF.o \
./src/Factoriz.o \
./src/PRPOTION.o \
./src/Prladdu.o \
./src/SeptemberLunchTimeChefAndEasyProblem.o \
./src/SeptemberLunchTimeChefAndEasyProblem2.o \
./src/test.o 

CPP_DEPS += \
./src/ChefAndGround.d \
./src/FATCHEF.d \
./src/Factoriz.d \
./src/PRPOTION.d \
./src/Prladdu.d \
./src/SeptemberLunchTimeChefAndEasyProblem.d \
./src/SeptemberLunchTimeChefAndEasyProblem2.d \
./src/test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


