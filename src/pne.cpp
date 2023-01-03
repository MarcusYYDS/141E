#include "headers.h"
void pne_ctrl()
{
  if(controller1.ButtonUp.pressing())
  pne_intake.set(false);
  else pne_intake.set(true);

  if(controller1.ButtonDown.pressing())
  pne_line.set(false);
  else pne_line.set(true);
}