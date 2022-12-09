#include "vex.h"
#include "iostream"
#include "cmath"
using namespace std;
using namespace vex;
extern brain Brain;
extern motor mtr_LF;
extern motor mtr_LB;
extern motor mtr_RF;
extern motor mtr_RB;
extern motor mtr_ZP_L;
extern motor mtr_ZP_R;
extern motor mtr_XP;
extern motor mtr_SP;
extern motor_group mtr_Lgroup;
extern motor_group mtr_Rgroup;
extern motor_group mtr_ZPgroup;
extern drivetrain chasis;
extern controller controller1;
extern competition Competition;
extern inertial imu();
void usecontrol();
void autonomou();
void zidong(int dis,int turn,int UP_turn,int TS);//声明