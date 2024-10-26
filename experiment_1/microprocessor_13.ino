int led = 10;
int increase = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
 for (int i = 0; i < 51; i++) {
  increase += 5;
  analogWrite(led, increase);
  delay(50);
  }
  
  for (int i = 0; i < 51; i++) {
  increase -= 5;
  analogWrite(led, increase);
  delay(50);
  }
}