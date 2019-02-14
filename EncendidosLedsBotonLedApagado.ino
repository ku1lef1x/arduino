int boton = 8;
int led = 4;

void setup() {
  // put your setup code here, to run once:

  pinMode(boton,INPUT_PULLUP);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);       //el led empieza apagado

}

void loop() {
  // put your main code here, to run repeatedly:

  int estado = digitalRead(boton);          //detectamos el boton, que esta high

  if (estado == LOW){                       //si pulsamos(pasa a low), enciende el led

    digitalWrite(led, HIGH);
  }

  if (estado == HIGH){                  //sino lo dejas apagado
    digitalWrite(led,LOW);
  }

}
