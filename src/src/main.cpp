/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Administrator                                    */
/*    Created:      Wed Jan 12 2022                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----


#include "headers.h"

competition Competition;
int main() {
  Competition.autonomous(autonomou);
  Competition.drivercontrol(usecontrol);
  while(1){
    display();
    wait(100,msec);
  }
  wait(5,msec); 
  usecontrol();//调用手动函数
  }

  
  // loading();
  // int count = 0;
   
  //   thread  t1(scrollingText_1);
  //   thread  t2(scrollingText_2);

  //   while(1) {
  //       // Allow other tasks to run
  //       this_thread::sleep_for(10);
  //   }
  // // Initializing Robot Configuration. DO NOT REMOVE!
  // Competition.drivercontrol(usecontrol);//主函数手动
  // // Competition.drivercontrol(usecontrol);
  // Brain.Screen.setFont(fontType::prop40);//字体大小
  // Brain.Screen.setPenColor(green);//画笔颜色
  // Brain.Screen.setPenWidth(3);//画笔粗细
  // Brain.Screen.setFillColor(blue);//填充颜色
  // Brain.Screen.printAt(200,120,true,"141E");
  //                     //x  //y //正反 //内容
  // // Brain.Screen.drawCircle(20,20,20,blue);
  //                        //x  //y //r //color
  // // Brain.Screen.drawRectangle(100,100,59,     50,      red);
  //                            //x //y //width //height //color
  // // Brain.Screen.drawLine(100,      100,      200,      10);
  //                       //start x //start y //begin x //begin y
  // // Brain.Screen.clearScreen();
  // mtr_LF.spinFor(directionType::fwd,400,rotationUnits::deg,400,velocityUnits::pct);
  // mtr_LB.spinFor(directionType::fwd,400,rotationUnits::deg,400,velocityUnits::pct);
  // mtr_RF.spinFor(directionType::fwd,400,rotationUnits::deg,400,velocityUnits::pct);
  // mtr_RF.spinFor(directionType::fwd,400,rotationUnits::deg,400,velocityUnits::pct);
  // Brain.Screen.printAt(100,100,false,"mtr_LF.position(rotationUnits::deg)");
  // Brain.Screen.printAt(140,100,false,"mtr_LB.position(rotationUnits::deg)");
  // Brain.Screen.printAt(100,380,false,"mtr_RF.position(rotationUnits::deg)");
  // Brain.Screen.printAt(140,380,false,"mtr_RF.position(rotationUnits::deg)");
