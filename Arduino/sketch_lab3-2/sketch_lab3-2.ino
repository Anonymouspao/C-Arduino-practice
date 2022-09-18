const int button = 4;
int btVoltage = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);// put your setup code here, to run once:
  pinMode(button, INPUT);
}

void loop() {
  btVoltage = digitalRead(button);// put your main code here, to run repeatedly:

  if (btVoltage == HIGH){
      digitalWrite(LED_BUILTIN, HIGH);
  }
  else{
     digitalWrite(LED_BUILTIN, LOW);
  }
}
