#include "headers.h"
void chasis_turn_pid(int aim_angle,int timeout)
{
  imu.resetRotation();
  cout << "imu.yaw():"<<imu.yaw() << endl;
  double err=aim_angle,kp=0.3;
  timer t;
  while(t.time()<timeout)
  {
    err=aim_angle-imu.yaw();
    double output=kp*err;
    chasis.turn(turnType::right,output, velocityUnits::pct);
    cout << imu.yaw() << endl;
    wait(5,msec);
    if(fabs(err)<0.2&&fabs(imu.gyroRate(axisType::zaxis, velocityUnits::dps)) < 1)
    break;
  }
}

void chasis_fwd_pid(int aim_dis, int max_pwr,int timeout) {
  double kp = 0.3, err = aim_dis;
  mtr_LF.resetPosition();
  timer t;
  while (t.time() < timeout) {
    err = aim_dis - mtr_LF.position(rotationUnits::deg);
    double output = kp * err;
    if(abs(output)>max_pwr)
    output=max_pwr;
    chasis.drive(directionType::fwd, output, velocityUnits::pct);
    wait(5, msec);
    if (abs(err) < 10)
      break;
    cout<<mtr_LF.position(rotationUnits::deg)<<endl;
  }
}