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

  int estado = digitalRead(boton);    //lee estado, que es HIGH

  if (estado == LOW){             //estado pasa a LOW si pulsamos el boton

    digitalWrite(led, LOW);       //apaga led
  }

  if (estado == HIGH){            //si no pulsamos, lo deja encendido
    digitalWrite(led,HIGH);
  }

}
