/*Apagar led pulsando boton*/


int estado = 0;           //declaramos variable estado, para comprobar el estado del pin 8 (boton)

void setup() {
  // put your setup code here, to run once:

  pinMode(8, INPUT);        //el pin 8, donde tenemos el boton, se abre para entrada

  pinMode(4, OUTPUT);       //el pin 4, donde tenemos el led, se abre para salida   
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  estado = digitalRead(8); 

  if (estado == HIGH) {       //comprobamos si la variable estado (lectura pin 8) esta en alta o baja, si esta en alta, hemos presionado boton.

    digitalWrite(4, HIGH);    //pon el pin 4 (led) en alto (encendido)
  }

  else
  {
    digitalWrite(4, LOW);   //pon estado pin 4 (led) en bajo (apagado) 
  }

}
