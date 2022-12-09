#include "headers.h"
int line_value = 40;
void punch_reset(){
  if(line_punch.value(pct)>line_value){
    mtr_punch.spin(directionType::fwd, 12.8, voltageUnits::volt);
    while(line_punch.value(pct)>line_value){
      wait(5, msec);
    }
    mtr_punch.stop();
  }
}
void punch_once(){
  mtr_punch.spin(directionType::fwd, 12.8, voltageUnits::volt);
  while(line_punch.value(pct)<line_value){
    wait(5, msec);
  }
  wait(200, msec);
  punch_reset();
}
void punch_hardle_routine(){
  mtr_punch.setBrake(brakeType::hold);
  while(1){
    if(controller1.ButtonR2.pressing()){
      mtr_punch.spin(directionType::fwd, 12.8, voltageUnits::volt);
      while(line_punch.value(pct)<line_value){
        wait(5,msec);
      }
    }
    else{
      punch_reset();
      }
    wait(5,msec);
  }
    
}
