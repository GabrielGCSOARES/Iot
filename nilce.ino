// exemplo 01: led pisca

const int LED = 13;//LED PINO 13 ARDUINO UNO
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(8600);
  digitalWrite(LED, LOW);
  delay(8600);
}
