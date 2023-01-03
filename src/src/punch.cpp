#include "headers.h"
void punch_once() {
  int deg_now = mtr_punch.position(rotationUnits::deg);
  double deg_aim = (1 + deg_now / 180) * 180;
  timer t;
  while (t.time() < 1000) {
    // pid 控住马达转到目标值
    const double kp = 1.2;
    double err = (deg_aim - mtr_punch.position(rotationUnits::deg));
    if (fabs(err) < 3)
      break;
    double pwr_pct = kp * err;
    if (pwr_pct > 100)
      pwr_pct = 100;
    mtr_punch.spin(directionType::fwd, pwr_pct / 100 * 12.8,
                   voltageUnits::volt);
  }
  mtr_punch.stop(brake);
}


  bool aim_set = false;
  int deg_aim = 0; 
void punch_ctrl() {

  if (controller1.ButtonR2.pressing()) {
    mtr_punch.spin(directionType::fwd, 12.8, voltageUnits::volt);
    aim_set = false;
  } else {
    if (aim_set == false) { //刚刚松开，只设置1次目标值
      aim_set = true;
      int deg_now = mtr_punch.position(rotationUnits::deg);
      deg_aim = (1 + deg_now / 180) * 180;
    }

    // pid 控住马达转到目标值
    const double kp = 1.1;
    double pwr_pct = kp * (deg_aim - mtr_punch.position(rotationUnits::deg));
    if (pwr_pct > 100)
      pwr_pct = 100;
    mtr_punch.spin(directionType::fwd, pwr_pct / 100 * 12.8,
                   voltageUnits::volt);
  }
}