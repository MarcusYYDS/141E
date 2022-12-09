#include "headers.h"
brain Brain;
motor mtr_LF(PORT19, ratio18_1, true);//左前马达
motor mtr_LB(PORT13, ratio18_1, true);//左后马达
motor mtr_RF(PORT20, ratio18_1, false);//右前马达
motor mtr_RB(PORT17, ratio18_1, false);//右后马达
motor mtr_shoot_L(PORT18,ratio18_1,false);
motor mtr_shoot_R(PORT16,ratio18_1,true);
motor mtr_intake(PORT15,ratio18_1,false);
motor mtr_punch(PORT14,ratio18_1,false);
motor_group mtr_Lgroup = motor_group(mtr_LB, mtr_LF); //左部马达组
motor_group mtr_Rgroup = motor_group(mtr_RB, mtr_RF); //右部马达组
motor_group mtr_Sgroup = motor_group(mtr_shoot_L,mtr_shoot_R);
controller controller1;                                //遥控器
drivetrain chasis(mtr_Lgroup, mtr_Rgroup);            //底盘
line line_punch(Brain.ThreeWirePort.G);
inertial imu(PORT3);
smartdrive s_drv=smartdrive(mtr_Lgroup,mtr_Rgroup,imu);
/*
定义
*/