int boton = 8;
int led = 4;
int estado = 0;

void setup() {
  // put your setup code here, to run once:

  pinMode(boton,INPUT_PULLUP);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);   //apagamos el led

}

void loop() {
  // put your main code here, to run repeatedly:

  int pulsador = digitalRead(boton);          //detectamos el pin con pulsador, esta HIGH

  if (pulsador == LOW){                       //pulsamos para que pase a LOW

    estado = 1 - estado;        //si pulsamos el boton, 1-0 (estado = 0) = 1

    if (estado == 1){           //si estado es 1 enciende el led, como es una variable se queda en 1 en el loop hasta que volvamos a pulsar
      digitalWrite(led, HIGH);
    }
    else{                     //si estado es 0 deja el led apagado
      digitalWrite(led,LOW);
    }
  }
 

}
