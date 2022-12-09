#include "headers.h"
void auto_red_left(){

}
void auto_red_right(){

}
void auto_blue_left(){

}
void auto_blue_right(){

}
// void chasis_fwd_turn(int dis, int turn)
// {
//   chasis.driveFor(directionType::fwd, dis,
//                   distanceUnits::mm, 70, velocityUnits::pct, true);
//   chasis.turnFor(turnType::right, turn,
//                  rotationUnits::deg, 70, velocityUnits::pct, true);
// } //自动
// void chasis_line(int distance){
//     chasis.driveFor(directionType::fwd,distance, 
//                    distanceUnits::mm,100,velocityUnits::pct,true);
// }
// void chasis_pid_line(double aim){
//   double kp = 0.5;
//   double err,value_now,output;
//   value_now=mtr_LF.position(rotationUnits::deg);//获取当前马达的位置
//   err=aim-value_now;//误差
//   output=kp*err;
//   chasis.driveFor(directionType::fwd,aim, 
//                    distanceUnits::mm,output,velocityUnits::pct,true);//pid控制速度
// }