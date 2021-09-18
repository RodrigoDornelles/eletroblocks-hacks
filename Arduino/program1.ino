void setup() {
  Serial.begin(9600);
  pinMode(A0, OUTPUT);
}

void loop() {
  int a = map(analogRead(A1), 0, 1024, 255, 0);

  if (a > 1) {
    digitalWrite(A0, !digitalRead(A0));
    delay(a);
  } else {
    digitalWrite(A0, HIGH);
  }
  Serial.println(a);
}
