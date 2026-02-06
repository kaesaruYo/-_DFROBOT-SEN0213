#include <M5Core2.h>

const int heartPin = 36;  //ADCで刺したところの番号(G36なら 36)

void setup() {
  Serial.begin(115200); //プロッタのbaudの数値はここの引数にする
  delay(100);  
}

void loop() {
  int heartValue = analogRead(heartPin);
  Serial.println(heartValue);
  delay(5);
}"