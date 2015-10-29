int row[] = {
  A0,A1,A2,A3};
int col[] = {
  A4,A5,A6};
int i, j;
int ms_delay = 100;  // Delay in between key presses (ms)
char key;

void setup()
{
  Serial.begin(9600);
  for(i=0;i<4;i++)
    pinMode(row[i], OUTPUT);
  for(j=0;j<3;j++){
    pinMode(col[j], INPUT); 
    digitalWrite(col[j], HIGH);
  }
}

void loop(){
  for(i=0;i<4;i++){
    digitalWrite(row[0], HIGH);
    digitalWrite(row[1], HIGH);
    digitalWrite(row[2], HIGH);
    digitalWrite(row[3], HIGH);

    digitalWrite(row[i], LOW);

    for(j=0;j<3;j++){
      if(digitalRead(col[j]) == LOW){
        keypress(i,j);
      }
    } 
  }
}

void keypress(int i, int j){
  if(i==0){
    if(j==0)
      key = '1';
    else if (j==1)
      key = '2';
    else if (j==2)
      key = '3';
  }
  else if (i==1){
    if(j==0)
      key = '4';
    else if (j==1)
      key = '5';
    else if (j==2)
      key = '6';
  }
  else if(i==2){
    if(j==0)
      key = '7';
    else if (j==1)
      key = '8';
    else if (j==2)
      key = '9';
  }
  else if(i==3){
    if(j==0)
      key = '*';
    else if (j==1)
      key = '0';
    else if (j==2)
      key = '#';
  }


  Serial.println(key);
  delay(ms_delay);
}


