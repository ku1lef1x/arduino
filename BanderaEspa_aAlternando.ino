int rojo1 = 2;
int rojo2 = 3;
int rojo3 = 4;
int rojo4 = 5;

int amarillo1 = 6;
int amarillo2 = 7;
int amarillo3 = 8;
int amarillo4 = 9;

void setup() {

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);

}

void loop() {

  //alternamos
  
  digitalWrite(rojo1,HIGH);
  digitalWrite(rojo2,HIGH);
  delay(500);
  digitalWrite(rojo1,LOW);
  digitalWrite(rojo2,LOW);

  digitalWrite(amarillo1,HIGH);
  digitalWrite(amarillo3,HIGH);
  delay(500);
  digitalWrite(amarillo1,LOW);
  digitalWrite(amarillo3,LOW);

  
  digitalWrite(amarillo2,HIGH);
  digitalWrite(amarillo4,HIGH);
  delay(500);  
  digitalWrite(amarillo2,LOW);
  digitalWrite(amarillo4,LOW);
  
  digitalWrite(rojo3,HIGH);
  digitalWrite(rojo4,HIGH);
  delay(500);
  digitalWrite(rojo3,LOW);
  digitalWrite(rojo4,LOW);

  //dejamos fijos

  digitalWrite(rojo1,HIGH);
  digitalWrite(rojo2,HIGH);
 
  digitalWrite(amarillo1,HIGH);
  digitalWrite(amarillo3,HIGH);
 
  digitalWrite(amarillo2,HIGH);
  digitalWrite(amarillo4,HIGH);
   
  digitalWrite(rojo3,HIGH);
  digitalWrite(rojo4,HIGH);

  delay (3000);
  
  //apagamos todos y volvemos a empezar

  digitalWrite(rojo1,LOW);
  digitalWrite(rojo2,LOW);
 
  digitalWrite(amarillo1,LOW);
  digitalWrite(amarillo3,LOW);
 
  digitalWrite(amarillo2,LOW);
  digitalWrite(amarillo4,LOW);
   
  digitalWrite(rojo3,LOW);
  digitalWrite(rojo4,LOW);

  delay (1000);
  

}
