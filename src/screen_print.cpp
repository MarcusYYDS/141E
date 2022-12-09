#include "headers.h"
void display() {
  
  Brain.Screen.setPenColor(white);
  Brain.Screen.setPenWidth(2);
  // Brain.Screen.drawLine(0, 120,480,120);
  // Brain.Screen.drawLine(240, 0,240,240);
  Brain.Screen.setFont(fontType::mono12);
  Brain.Screen.drawRectangle(20,20, 70, 30,red);    //左上角红1
  Brain.Screen.setFont(fontType::mono12);
  Brain.Screen.printAt(40,42,false,"left");
  Brain.Screen.drawRectangle(140,20, 70, 30,red);
  Brain.Screen.printAt(155,42,false,"right");
  Brain.Screen.drawRectangle(20,70, 70, 30,blue);
  Brain.Screen.printAt(40,92,false,"left");
  Brain.Screen.drawRectangle(140,70, 70, 30,blue);
  Brain.Screen.printAt(155,92,false,"right");
/////////////////////////////////////////十字架和自动按钮
  Brain.Screen.setFont(fontType::prop40);
  Brain.Screen.setPenColor(blue);
  Brain.Screen.printAt(20,200,"SSCZ 141E");
  // Brain.Screen.printAt(260,180,"imu: %0.2f       ",imu.yaw());
/////////////////////////////////////////队号
  Brain.Screen.setPenColor(white);
  Brain.Screen.setFont(fontType::mono20);
  while(1){
    // char mtr_LB_info= ("mtr_LB:     ") + mtr_LB.velocity(pct)+mtr_LB.temperature(celsius);
    Brain.Screen.setPenColor(white);//////////////////////////////////////
    Brain.Screen.printAt(260,140,"shoot:");
    Brain.Screen.printAt(260,165,"intake:");
    Brain.Screen.printAt(260,190,"punch:");
    Brain.Screen.printAt(260,215,"chasisL:");
    Brain.Screen.printAt(260,240,"chasisR:");
    Brain.Screen.printAt(260,40,"velocity:%0.0f",vtg_pct_near);
    // Brain.Screen.printAt(260,80,"Battery:%0.0f", Brain.Battery.capacity()*100);
    Brain.Screen.setPenColor(purple);///////////////////////////////////
    Brain.Screen.printAt(340,140,"ang:%0.0f",mtr_Sgroup.velocity(pct));
    Brain.Screen.printAt(340,165,"ang:%0.0f",mtr_intake.velocity(pct));
    Brain.Screen.printAt(340,190,"ang:%0.0f",mtr_punch.velocity(pct));
    Brain.Screen.printAt(340,215,"ang:%0.0f",mtr_Lgroup.velocity(pct));
    Brain.Screen.printAt(340,240,"ang:%0.0f",mtr_Rgroup.velocity(pct));
    Brain.Screen.setPenColor(red);/////////////////////////////////////
    Brain.Screen.printAt(410,140,"temp:%0.0f",mtr_Sgroup.temperature(celsius));
    Brain.Screen.printAt(410,165,"temp:%0.0f",mtr_intake.temperature(celsius));
    Brain.Screen.printAt(410,190,"temp:%0.0f",mtr_punch.temperature(celsius));
    Brain.Screen.printAt(410,215,"temp:%0.0f",mtr_Lgroup.temperature(celsius));
    Brain.Screen.printAt(410,240,"temp:%0.0f",mtr_Rgroup.temperature(celsius));
    wait(200,msec);
  }
}

void loading(){
  // Brain.Screen.setCursor(10, 1);
  // Brain.Screen.print("");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("1");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("14");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("141");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("  141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("    141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("      141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("        141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("          141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("            141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("              141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                  141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                    141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                      141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                        141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                          141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                            141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                              141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                                141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                                  141E");
  // wait(200, msec);
  // Brain.Screen.clearLine();
  // Brain.Screen.print("                                    141E");
  // Brain.Screen.clearLine();
  // while(1){
    
  //   Brain.Screen.printAt(240,120,"mtr_LB.temperature(celsius)");
  //   Brain.Screen.printAt(" ");
  //   Brain.Screen.printAt(mtr_LB.velocity(pct));
  //   Brain.Screen.printAt(" ");
  //   controller1.Screen.print("11111111111111111111");
  //   Brain.Screen.printAt(mtr_LB.temperature(celsius));
  //   Brain.Screen.printAt(" ");
  //   Brain.Screen.printAt(mtr_LB.velocity(pct));
  //   Brain.Screen.printAt(" ");
  //   Brain.Screen.printAt("Battery % full", (Brain.Battery.capacity())*100); 
    
  //  }
}
// int colors[6] = {'Red','Blue','Green','pink','seagreen'};
// void
// scrollingText_1() {
//     int xpos = -430;
//     int ypos = 90;
//     Brain.Screen.setFont(fontType::prop40);
//     while(1) {
//       Brain.Screen.printAt( xpos, ypos, "  Skills Auton is now ready!   ");
//       xpos += 7;
//       if( xpos > 480 )
//         xpos = -430;
//       this_thread::sleep_for(50);
//     }
// }

// void
// scrollingText_2() {
//     int xpos = 480;
//     int ypos = 150;
//     Brain.Screen.setFont(fontType::prop40);
//     while(1){
//       Brain.Screen.printAt( xpos, ypos, "  Blue Auton is now ready!   ");
//       xpos -= 7;
//       if( xpos < -430 )
//         xpos = 480;
//     this_thread::sleep_for(50);
//     }
//   }

