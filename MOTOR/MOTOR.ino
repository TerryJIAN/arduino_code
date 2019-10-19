#include <Stepper.h>
// 定義步進馬達轉一圈所需的步數及輸出的腳位
Stepper stepper(400, A2, A3, A4, A5);

void setup()
{
  // 將馬達速度設定為每分鐘80轉(RPM)
  stepper.setSpeed(80);   


}
void loop()
{
  // 馬達行進步數
  stepper.step(200);    //正半圈
  delay(1500);
  stepper.step(-200);   //反半圈
  delay(1500);

}
