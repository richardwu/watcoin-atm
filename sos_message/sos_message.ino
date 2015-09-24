
#define LED GREEN_LED
void setup()
{
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop()
{
  //  digitalWrite(LED, HIGH);
  s_blink();
  o_blink();
  s_blink();
  // Wwait 3 secs between words
  delay(3000);
}

// Three short blinks 
void s_blink(){
    for(int i = 0; i < 3; i++){
      digitalWrite(LED, HIGH);
      delay(1000);
      digitalWrite(LED, LOW);
      delay(1000);
    }
}

// Three long blinks
void o_blink(){
  for(int i = 0; i < 3; i++){
    digitalWrite(LED,HIGH);
    delay(3000);
    digitalWrite(LED, LOW);
    delay(1000);
  }
}
