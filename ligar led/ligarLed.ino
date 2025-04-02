
int vermelho = 3;
int max = 35;
int min = 0;
int tmp = 50;
void setup()
{
  pinMode(vermelho, OUTPUT);
}

void loop()
{
  for(int i = min; i<max; i++){
  	analogWrite(vermelho, i);
    delay(tmp);
  }
  for(int i = max; i>min; i--){
  	analogWrite(vermelho, i);
    delay(tmp);
  }
}