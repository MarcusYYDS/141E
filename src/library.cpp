#include "headers.h"
/////红左按钮
void button_red_left() {
  int x = Brain.Screen.xPosition();  //x表示左上角x轴上的坐标
  int y = Brain.Screen.yPosition();   ////y表示左上角y轴上的坐标
  if (x < 90 && x > 20 && y < 50 && y > 20) {
    Brain.Screen.drawRectangle(20, 20, 70, 30, green);
    Brain.Screen.printAt(40, 42, false, "left");
    if (controller1.ButtonLeft.pressing())
      auto_red_left();
  } else {
    Brain.Screen.drawRectangle(20, 20, 70, 30, red);
    Brain.Screen.printAt(40, 42, false, "left");
  }
}

///红右按钮
void button_red_right() {
  int x = Brain.Screen.xPosition();
  int y = Brain.Screen.yPosition();
  if (x < 210 && x > 140 && y < 50 && y > 20) {
    Brain.Screen.drawRectangle(140, 20, 70, 30, green);
    Brain.Screen.printAt(155, 42, false, "right");
    if (controller1.ButtonLeft.pressing())
      cout << "red_right" << endl;
  } else {
    Brain.Screen.drawRectangle(140, 20, 70, 30, red);
    Brain.Screen.printAt(155, 42, false, "right");
    ;
  }
}

////蓝左按钮
void button_blue_left() {
  int x = Brain.Screen.xPosition();
  int y = Brain.Screen.yPosition();
  if (x < 90 && x > 20 && y < 100 && y > 70) {
    Brain.Screen.drawRectangle(20, 70, 70, 30, green);
    Brain.Screen.printAt(40, 92, false, "left");
    if (controller1.ButtonLeft.pressing())
      cout << "blue_left" << endl;
  } else {
    Brain.Screen.drawRectangle(20, 70, 70, 30, blue);
    Brain.Screen.printAt(40, 92, false, "left");
  }
}

/////蓝右按钮
void button_blue_right() {
  int x = Brain.Screen.xPosition();
  int y = Brain.Screen.yPosition();
  if (x < 210 && x > 140 && y < 100 && y > 70) {
    Brain.Screen.drawRectangle(140, 70, 70, 30, green);
    Brain.Screen.printAt(155, 92, false, "right");
  
    if (controller1.ButtonLeft.pressing())
      cout << "blue_right" << endl;
  } else {
    Brain.Screen.drawRectangle(140, 70, 70, 30, blue);
    Brain.Screen.printAt(155, 92, false, "right");
    
  }
}