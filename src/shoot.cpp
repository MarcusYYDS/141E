#include "headers.h"
int shoot_staus = 0;
#define shoot_stop 0
#define shoot_near 1
#define shoot_far 2
double vtg_pct_near=57;

void near_shoot_ctrl(){
  mtr_Sgroup.spin(directionType::fwd, 12.8*vtg_pct_near/100, voltageUnits::volt);
  if(controller1.Axis2.position()>50)
{
  vtg_pct_near++;
  controller1.rumble(".");//震动/.短/..长/...连续
  while(controller1.Axis2.position()>50)
  wait(5,msec);
}
if(controller1.Axis2.position()<-50)
{
  vtg_pct_near--;
  controller1.rumble(".");
  while(controller1.Axis2.position()<-50)
  wait(5,msec);
}
}
void far_shoot_ctrl(double vtg_pct_far){
  // int vtg_pct_far = 68;
  mtr_Sgroup.spin(directionType::fwd, 12.8*vtg_pct_far/100, voltageUnits::volt);
}

void shoot_handle(){
  if(controller1.ButtonL1.pressing())
    shoot_staus=shoot_far;
  if(controller1.ButtonL2.pressing())
    shoot_staus=shoot_near;
  if(controller1.ButtonA.pressing())
    shoot_staus=shoot_stop;
  switch(shoot_staus){
    case shoot_far:
  far_shoot_ctrl(65);
  break;
  case shoot_near:
  near_shoot_ctrl();
  break;
  case shoot_stop:
  mtr_Sgroup.stop();
}
}
