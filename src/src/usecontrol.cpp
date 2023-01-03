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
      chasis.stop(brakeType::brake);
    }


punch_ctrl();
intake_ctrl();
shoot_handle();
pne_ctrl();
    wait(5, msec);
  }
}
