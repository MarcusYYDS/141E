#include "headers.h"
void usecontrol()
{
  while (1)                           
  {
    int leftspeed = controller1.Axis3.position() * 0.5 + controller1.Axis4.position() * 0.5;
    int rightspeed = controller1.Axis3.position() * 0.5 - controller1.Axis4.position() * 0.5;
    mtr_Lgroup.spin(directionType::fwd, leftspeed, percentUnits::pct);
    mtr_Rgroup.spin(directionType::fwd, rightspeed, percentUnits::pct);
    wait(10, msec);
    if (controller1.ButtonA.pressing())
    {
      autonomou();
    if (controller1.ButtonB.pressing())
    {
      mtr_Lgroup.spin(directionType::fwd,100, velocityUnits::pct);
    }
    if (controller1.ButtonR1.pressing())
    {
      mtr_XP.spin(directionType::fwd,100,velocityUnits::pct);
    }
    else {
      mtr_XP.stop();
    }
    if (controller1.ButtonR2.pressing())
    {
      mtr_XP.stop();
    }
    if(controller1.ButtonX.pressing()){
      //
    }
    if (controller1.ButtonL1.pressing())
    {
      mtr_ZPgroup.spin(directionType::fwd,500, velocityUnits::pct);
    }                                                                                                                                       
    if (controller1.ButtonL2.pressing())
    {
      mtr_SP.spin(directionType::fwd,100,velocityUnits::pct);
    }
    if(controller1.ButtonUp.pressing()){
      mtr_ZPgroup.stop();
      mtr_SP.stop();
    }
  }
}
}