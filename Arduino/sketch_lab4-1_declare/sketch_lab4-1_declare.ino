const int led = 3;

void setup() {
  
}

void loop() {
  int fadeValue;
  for (fadeValue = 0; fadeValue <= 255; fadeValue =fadeValue + 1)
  {
    analogWrite(led, fadeValue);
    delay(1);
  }
  for (fadeValue = 255; fadeValue >= 0; fadeValue =fadeValue - 1)
  {
    analogWrite(led, fadeValue);
    delay(1);
  }
}
