const int button = 4;
int btVoltage = 0;

void setup() {
  led_set(LED_BUILTIN);
  pinMode(button, INPUT);
}

void loop() {
  if (isButtonPress(LOW)){
      led_off(LED_BUILTIN);
  }
  else{
     led_on(LED_BUILTIN);
  }
}
