#include "headers.h"
void autonomou()
{
  button_red_left();
  button_red_right();
  button_blue_left();
  button_blue_right();
}

#define red_left 1
#define red_right 2
#define blue_left 3
#define blue_right 4
int auto_staus = 0;
void autonomou_(){
  int x = Brain.Screen.xPosition();  //x表示左上角x轴上的坐标
  int y = Brain.Screen.yPosition();   ////y表示左上角y轴上的坐标
  if (x < 90 && x > 20 && y < 50 && y > 20) {
    auto_staus=red_left;
  }
  if (x < 210 && x > 140 && y < 50 && y > 20){
    auto_staus=red_right;
  }
  if (x < 90 && x > 20 && y < 100 && y > 70){
    auto_staus=blue_left;
  }
  if (x < 210 && x > 140 && y < 100 && y > 70){
    auto_staus=blue_left;
  }

  switch(auto_staus){
    case red_left:
      Brain.Screen.drawRectangle(20, 20, 70, 30, green);
      Brain.Screen.printAt(40, 42, false, "left");
      auto_red_left();
      break;
    case red_right:
      Brain.Screen.drawRectangle(140, 20, 70, 30, green);
      Brain.Screen.printAt(155, 42, false, "right");
      auto_red_right();
      break;
    case blue_left:
      Brain.Screen.drawRectangle(20, 70, 70, 30, green);
      Brain.Screen.printAt(40, 92, false, "left");
      auto_blue_left();
      break;
    case blue_right:
      Brain.Screen.drawRectangle(140, 70, 70, 30, green);
      Brain.Screen.printAt(155, 92, false, "right");
      auto_blue_right();
      break;
  }
}