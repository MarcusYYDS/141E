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
extern motor mtr_shoot_L;
extern motor mtr_shoot_R;
extern motor mtr_punch;
extern motor mtr_intake;
extern motor_group mtr_Lgroup;
extern motor_group mtr_Rgroup;
extern motor_group mtr_Sgroup;
extern drivetrain chasis;
extern controller controller1;
extern competition Competition;
extern inertial imu;
extern line line_punch;
extern smartdrive s_drv;
extern digital_out pne_intake;
extern digital_out pne_line;
// void punch_reset();
// void shoot_handle();
// void loading();
void display();
// void scrollingText_1();
// void scrollingText_2();
// void punch_hardle_routine();
void usecontrol();
void autonomou();
/////////////////////////
void punch_once();
void punch_ctrl();
void intake_ctrl();
void near_shoot_ctrl();
void far_shoot_ctrl(double vtg_far_pct);
void shoot_handle();
void pne_ctrl();
//////////////////////////
void button_red_left();
void button_red_right();
void button_blue_left();
void button_blue_right();
//////////////////////////////////
void auto_red_left();
void auto_red_right();
void auto_blue_left();
void auto_blue_right();
///////////////////////////////////
extern double vtg_pct_near;
extern bool aim_set;
extern  int deg_aim;
// void chasis_line(int distance);
// void chasis_pid_line(double aim);
// void chasis_fwd_turn(int dis,int turn);
//声明