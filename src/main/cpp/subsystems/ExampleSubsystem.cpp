// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/ExampleSubsystem.h"

ExampleSubsystem::ExampleSubsystem() {
  // Implementation of subsystem constructor goes here.
  auto inst = nt::NetworkTableInstance::GetDefault();
  auto table = inst.GetTable("datatable");
  exampleEntry = table->GetEntry("example");
}

void ExampleSubsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void ExampleSubsystem::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
  exampleEntry.SetString("Howdy!");
  // This comment was made from inside github.dev! :-D
}
