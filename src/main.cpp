/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Administrator                                    */
/*    Created:      Wed Jan 12 2022                                           */
/*    Description:  V5 project                                                */
/*     __  ___                                                                */
/*    /  |/  /___ _____________  _______                                      */
/*   / /|_/ / __ `/ ___/ ___/ / / / ___/                                      */
/*  / /  / / /_/ / /  / /__/ /_/ (__  )                                       */
/* /_/  /_/\__,_/_/   \___/\__,_/____/                                        */
/*严禁抄袭                                                                     */
/*©2022 Marcus                                                                */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----


#include "headers.h"

// vex::competition Competition;
int main() {
  usecontrol();//调用手动函数
  // // Initializing Robot Configuration. DO NOT REMOVE!
  // Competition.drivercontrol(usecontrol);//主函数手动
  // // Competition.drivercontrol(usecontrol);
  Brain.Screen.printAt(200,120,true,"141E");
}