const int analogPin = A0;
int Vin = 0;
const int presetVal = 400;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);// put your setup code here, to run once:
}

void loop() {
  Vin = analogRead(analogPin);// put your main code here, to run repeatedly:
  if (Vin < presetVal) {
    digitalWrite(ledPin, HIGH);
  }
   if (Vin > presetVal) {
    digitalWrite(ledPin, LOW);
  }
}
