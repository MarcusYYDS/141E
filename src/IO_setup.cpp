#include "headers.h"
brain Brain;
motor mtr_LF(PORT12, ratio18_1, true);                           //左前马达
motor mtr_LB(PORT13, ratio18_1, true);                           //左后马达
motor mtr_RF(PORT18, ratio18_1, false);                          //右前马达
motor mtr_RB(PORT17, ratio18_1, false);                          //右后马达
motor mtr_ZP_L(PORT14, ratio6_1, true);                          //右上马达
motor mtr_ZP_R(PORT15, ratio6_1, false);                         //左上马达
motor mtr_XP(PORT11, ratio6_1, true);                            //吸盘处的马达
motor mtr_SP(PORT20,ratio36_1,true);                             //射盘处的马达
motor_group mtr_Lgroup = motor_group(mtr_LB, mtr_LF);            //左部马达组
motor_group mtr_Rgroup = motor_group(mtr_RB, mtr_RF);            //右部马达组
motor_group mtr_ZPgroup = motor_group(mtr_ZP_L, mtr_ZP_R);//射球马达组
controller controller1;                                          //遥控器
drivetrain chasis(mtr_Lgroup, mtr_Rgroup);                       //底盘
/*
定义

*/