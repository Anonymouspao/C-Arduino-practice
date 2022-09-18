const int led = 3;

void setup() {
  pinMode (13, OUTPUT);// put your setup code here, to run once:
  digitalWrite(13, LOW);
  pinMode (13, INPUT);// put your setup code here, to run once:
}

void loop() {
  for (int fadeValue = 0; fadeValue <= 255; fadeValue =fadeValue + 1)
  {
    analogWrite(led, fadeValue);
    delay(5);
  }
  for (int fadeValue = 255; fadeValue >= 0; fadeValue =fadeValue - 1)
  {
    analogWrite(led, fadeValue);
    delay(5);
  }
}
