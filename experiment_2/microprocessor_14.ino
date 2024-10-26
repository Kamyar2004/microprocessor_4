int led = 10;
int val = 0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 val = analogRead(A0);
 int hashVal = map(val, 0, 1023, 0, 255);
 analogWrite(led, hashVal);
 int voltVal = map(val, 0, 1023, 0, 5);
   Serial.println(voltVal);
   delay(2000);
}