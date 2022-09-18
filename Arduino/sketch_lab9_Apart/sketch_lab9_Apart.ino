const int thermistorPin = A0;
const int BuzzerPin = 8;

void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
  pinMode(BuzzerPin, OUTPUT);
}

void loop() {
  int thermistorVal = analogRead(thermistorPin);// put your main code here, to run repeatedly:
  Serial.println(thermistorVal);
  delay(5000);
}
