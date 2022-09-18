int segmentPattern[10][7]=
                         {   {1,1,1,1,1,1,0},
                             {0,1,1,0,0,0,0},
                             {1,1,0,1,1,0,1},
                             {1,1,1,1,0,0,1},
                             {0,1,1,0,0,1,1},
                             {1,0,1,1,0,1,1},
                             {1,0,1,1,1,1,1},
                             {1,1,1,0,0,0,0},
                             {1,1,1,1,1,1,1},
                             {1,1,1,1,0,1,1},
                         };
const int button = 2;
int count=0;
void setup() {
  for(int pin = 5; pin <= 11; pin = pin+1)   {
    pinMode(pin, OUTPUT);
  }
  pinMode(button, INPUT);  
}
void sevenSgmentWrite(int digit) {
  for(int ledSeg = 0; ledSeg < 7; ledSeg = ledSeg +1) {
    digitalWrite(ledSeg+5, segmentPattern[digit][ledSeg]);
  }
}
void loop() {
  int buttonStatus = 0;
  buttonStatus = digitalRead(button);
  delay(100);
  sevenSgmentWrite(count);
  if(buttonStatus == HIGH)
    count = count +1;
  if(count > 9)
     count = 0;
  delay(100);
}
