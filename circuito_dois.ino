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
{ Serial.println(people);
  botao = digitalRead(buttonMore);
  botao2= digitalRead(buttonLess);

	if(people >= 0 && people <= 20){
    if(botao == HIGH){
    	digitalWrite(ledGreen, HIGH);
      digitalWrite(ledYellow, LOW);
      digitalWrite(ledOrange, LOW);
      digitalWrite(ledRed, LOW);
      people++;
      delay(400);
    }
	}
 	
  if(people > 21 && people <= 30){
    if(botao == HIGH){
    	digitalWrite(ledGreen, LOW);
      digitalWrite(ledYellow, HIGH);
      digitalWrite(ledOrange, LOW);
      digitalWrite(ledRed, LOW);
      people++;
      delay(400);
    }
  		
	}
 	
  if(people > 31 && people <= 47){
    if(botao == HIGH){
    	digitalWrite(ledGreen, LOW);
      digitalWrite(ledYellow, LOW);
      digitalWrite(ledOrange, HIGH);
      digitalWrite(ledRed, LOW);
      people++;
      delay(400);
    }
  		
	}

  if(people > 48 && people <= 55){
    if(botao == HIGH){
    	digitalWrite(ledGreen, LOW);
      digitalWrite(ledYellow, LOW);
      digitalWrite(ledOrange, LOW);
      digitalWrite(ledRed, HIGH);
      people++;
      delay(400);
    }
  		
	}
  
}