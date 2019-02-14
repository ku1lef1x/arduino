int boton = 8;
int led = 4;

void setup() {
  // put your setup code here, to run once:

  pinMode(boton,INPUT_PULLUP);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);   //encendemos el led

}

void loop() {
  // put your main code here, to run repeatedly:

  int estado = digitalRead(boton);

  if (estado == LOW){

    digitalWrite(led, LOW);
  }

  if (estado == HIGH){
    digitalWrite(led,HIGH);
  }

}
