int ldrPin = 2;      // D0 output of the LDR module
int ledPin = 13;    // LED is connected to D13 pin of the Arduino

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrState = digitalRead(ldrPin);
  Serial.println(ldrState);  // 1: dark, 0: bright

  if (ldrState == 1) {
    digitalWrite(ledPin, HIGH);   // turn on if it's dark
  } else {
    digitalWrite(ledPin, LOW);    // turn off if it's bright
  }

  delay(200);
}
