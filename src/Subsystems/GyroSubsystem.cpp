/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "GyroSubsystem.h"
#include "../RobotMap.h"

GyroSubsystem::GyroSubsystem() : gyro{}, Subsystem("GyroSubsystem") {
	gyro.Calibrate();
}

void GyroSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

double GyroSubsystem::getGyroAngle() {
	return gyro.GetAngle();
}

void GyroSubsystem::reset() {
	gyro.Reset();
}

const ADXRS450_Gyro& GyroSubsystem::getGyro() {
	return gyro;
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
