#include "headers.h"
void usecontrol()
{
  thread t3(punch_hardle_routine);
  while (1){
    mtr_Lgroup.setStopping(brakeType::brake);
    mtr_Rgroup.setStopping(brakeType::brake);
    double leftspeed = controller1.Axis3.position()  + controller1.Axis4.position() ;
    double rightspeed = controller1.Axis3.position()  - controller1.Axis4.position() ;
    if(leftspeed || rightspeed){
      mtr_Lgroup.spin(directionType::fwd, leftspeed*12.8/100.0, voltageUnits::volt);
      mtr_Rgroup.spin(directionType::fwd, rightspeed*12.8/100.0, voltageUnits::volt);
    }
    else{
      mtr_Lgroup.stop();
      mtr_Rgroup.stop();
    }
    wait(10, msec);
    if(controller1.ButtonR1.pressing()){
      mtr_intake.spin(directionType::fwd, 12.8, voltageUnits::volt);
    }
    else if (controller1.ButtonB.pressing()){
      mtr_intake.spin(directionType::rev, 12.8, voltageUnits::volt);
    }
    else{
      mtr_intake.stop();
    }
    if(controller1.ButtonDown.pressing()){
      punch_reset();
    }
    if(controller1.ButtonLeft.pressing()){
      mtr_intake.stop();
      mtr_Lgroup.stop();
      mtr_Rgroup.stop();
      mtr_punch.stop();
      mtr_Sgroup.stop();

    }
    shoot_handle();
  }
}
