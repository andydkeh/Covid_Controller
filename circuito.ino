const int ledGreen = 13;
const int ledYellow = 12;
const int ledOrange = 8;
const int ledRed = 7;
const int buttonMore = 4;
const int buttonLess = 2;
int people = 0;
int botao = 0;
int botao2 = 0;


void setup()
{
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(buttonMore, INPUT);
  pinMode(buttonLess, INPUT);
  Serial.begin(9600);
}

void loop() 
{	 Serial.println(people);
  botao = digitalRead(buttonMore);
  botao2= digitalRead(buttonLess);

  if(people >= 0 && people <= 20){
    if(botao == HIGH){
        digitalWrite(ledGreen, HIGH);
        people++;
        delay(400);
    }
  
    if(botao2 == HIGH){
        digitalWrite(ledYellow, LOW);
        people--;
        delay(400);
    }
  }
  
  else if(people > 21 && people <= 30){
      if(botao == HIGH){
        digitalWrite(ledYellow, HIGH);
        people++;
        delay(400);
      }
      if(botao2 == HIGH){
        digitalWrite(ledYellow, LOW);
        people--;
        delay(400);
      }
  }
  
  else if(people > 31 && people <= 47){
      if(botao == HIGH){
        digitalWrite(ledOrange, HIGH);
        people++;
        delay(400);
      }
      if(botao2 == HIGH){
        digitalWrite(ledOrange, LOW);
        people--;
        delay(400);
      }
  }
  else if(people > 48){
      if(botao == HIGH){
        digitalWrite(ledRed, HIGH);
        people++;
        delay(400);
      }
      if(botao2 == HIGH){
        digitalWrite(ledRed, LOW);
        people--;
        delay(400);
      }

  }
}