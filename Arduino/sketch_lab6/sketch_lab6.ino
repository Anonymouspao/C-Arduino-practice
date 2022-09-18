const int bluePin = 9;
const int greenPin = 10;
const int redPin = 11;
void setup() {
 }

void loop() {
  int blueValue = 0;// put your main code here, to run repeatedly:
  int redValue = 0;
  int greenValue = 0;
  for(redValue=1; redValue<=255; redValue+=1){
    analogWrite(redPin, redValue);
    delay(10);
  }
  for(redValue=255; redValue>=0; redValue-=1){
    analogWrite(redPin, redValue);
    delay(10);
  }
  for(greenValue=1; greenValue<=150; greenValue+=1){
    analogWrite(greenPin, greenValue);
    delay(10);
  }
  for(greenValue=150; greenValue>=0; greenValue-=1){
    analogWrite(greenPin, greenValue);
    delay(10);
  }
  for(blueValue=1; blueValue<=255; blueValue+=1){
    analogWrite(bluePin, blueValue);
    delay(10);
  }
  for(blueValue=255; blueValue>=0; blueValue-=1){
    analogWrite(bluePin, blueValue);
    delay(10);
  }
  for (int i=1; i<=100;i+=1) {
    redValue=random(1,30);
    greenValue=random(1,20);
    blueValue=random(1,50);
    analogWrite(redPin, redValue);
    analogWrite(greenPin, greenValue);
    analogWrite(bluePin, blueValue);
    delay(500);
  }
  analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
}
