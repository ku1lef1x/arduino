int led = 13;               //iniciamos variable led, será el puerto 13
void setup() {
  
pinMode(led,OUTPUT);        //pinMode(pin,funcion) en este caso el pin led (13), lo abrimos con OUTPUT.
}

void loop() {
                            
digitalWrite(led,HIGH);     //indicamos con digitalWrite que se encida el led
delay(1500);                //delay hace que se mantenga encendido los ms que indiquemos
digitalWrite(led,LOW);      //indicamos ahora que se apague el led
delay(250);                 //segundos que queremos que permanezca apagado
}


test
