void led_set(int pin) {
  pinMode(pin, OUTPUT);// put your setup code here, to run once:
}

void led_on(int pin) {
  digitalWrite(pin, HIGH);
}

void led_off(int pin) {
  digitalWrite(pin, LOW);
}

