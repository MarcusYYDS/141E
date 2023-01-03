#include "headers.h"
// 图片显示
void PicShow(){
  LV_IMG_DECLARE(bj);  //声明要使用的图像
  
  lv_obj_t * brain_pic = lv_img_create(lv_scr_act()); //常见LVGL组件
  lv_img_set_src(brain_pic, &bj);              //显示LVGL组件
  lv_obj_align(brain_pic, LV_ALIGN_TOP_LEFT, 0, 10);  //设置显示位置
}

///声明LVGL显示运行函数
void LVGLShow(){
  v5_lv_init();
  PicShow();    //调用图像显示程序

  //死循环卡主程序一保证程序运行
  while(true){
    this_thread::sleep_for(10);
  }
}
// 红左按钮
void button_red_left() {
  int x = Brain.Screen.xPosition();  //x表示左上角x轴上的坐标
  int y = Brain.Screen.yPosition();   // 表示左上角y轴上的坐标
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

// 蓝左按钮
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

// 蓝右按钮
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