int isButtonPress(int ActiveType) {
  btVoltage = digitalRead(button);// put your main code here, to run repeatedly:
  if (btVoltage == ActiveType) return true;
  else return false;
}

