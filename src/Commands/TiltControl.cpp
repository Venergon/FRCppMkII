/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "TiltControl.h"
#include "../Robot.h"

TiltControl::TiltControl(Joystick *joystick) : joystick{joystick} {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(&Robot::tiltSubsystem);
}

// Called just before this Command runs the first time
void TiltControl::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TiltControl::Execute() {
	Robot::tiltSubsystem.move(joystick->GetThrottle());
}

// Make this return true when this Command no longer needs to run execute()
bool TiltControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TiltControl::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TiltControl::Interrupted() {

}
