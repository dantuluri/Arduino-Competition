const int ENA = 9;
const int IN1 = 7;
const int IN2 = 6;


void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  analogWrite(ENA, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(1000);
  
  analogWrite(ENA, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(1000);

  analogWrite(ENA, 100);
  delay(1000);

  for (int v = 0; v < 255; ++v) {
    analogWrite(ENA, v);
    delay(200);
  }
}
