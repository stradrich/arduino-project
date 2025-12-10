// 13 - A7, resistor C7 - C9, LED long D9 - short D11, GND A11

void setup() {
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(8,LOW);
  delay(500);
  digitalWrite(13,LOW);
  digitalWrite(8,HIGH);
  delay(500);
}




