const int analogPIN = A2;
int readVal;

void setup() {
  Serial.begin(9600);// put your setup code here, to run once:
}

void loop() {
  readVal = analogRead(analogPIN);// put your main code here, to run repeatedly:
  Serial.println(readVal);
  delay(300);
}
