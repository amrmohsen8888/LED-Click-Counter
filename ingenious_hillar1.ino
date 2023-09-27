int led1 = 1;
int led2 = 2;
int led3 = 3;
int but = 4;
int on = HIGH;
int off = LOW;
int read;
int x;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(but, INPUT);
  Serial.begin(9600);
}

void loop() {
  read = digitalRead(but);
  if(read == on){
    delay(120);
    x++;
    switch (x)
    {
      case 1: digitalWrite(led1, on); 
      break;

      case 2: digitalWrite(led2, on);
      break;

      case 3: digitalWrite(led3, on);
      break;

      case 4: digitalWrite(led1, off);
      digitalWrite(led2, off);
      digitalWrite(led3, off);
      x=0;
      delay(250);
    }    
  }
}