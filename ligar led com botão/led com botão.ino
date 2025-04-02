// C++ code
//

int led = 8;
int btn = 9;
int clicado = 0;
int liberado = 0;

void trocaLed(){
  if(digitalRead(led)==HIGH){
  	digitalWrite(led, LOW);
  }else{
  	digitalWrite(led, HIGH);
  }
}

void keyup(){
  if(clicado==1 && liberado ==1){
  	clicado = 0;
    liberado = 0;
    trocaLed();
  } 
}

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
}

void loop()
{
  if(digitalRead(btn)==HIGH){
    clicado = 1;
    liberado = 0;
  }else{
  	liberado = 1;
  } 
  keyup();
}