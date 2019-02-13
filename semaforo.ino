int led_rojo = 2;
int led_amarillo = 3;
int led_verde = 4;

void setup() {
  pinMode(led_rojo, OUTPUT);
  pinMode(led_amarillo, OUTPUT);
  pinMode(led_verde, OUTPUT);

  digitalWrite(led_rojo, LOW);        //para que los leds empiecen apagados
  digitalWrite(led_amarillo, LOW);
  digitalWrite(led_verde, LOW);


}

void loop() {

  //partimos de que el semaforo está en verde

  digitalWrite(led_verde,HIGH);       //encendemos el led verde
  delay(5000);
  digitalWrite(led_verde,LOW);        //apagamos el led verde
  digitalWrite(led_amarillo, HIGH);   //encendemos el led amarillo
  delay(1500);
  digitalWrite(led_amarillo, LOW);    //apagamos el led amarillo
  digitalWrite(led_rojo, HIGH);      //encendemos el led rojo
  delay(3000);
  digitalWrite(led_rojo, LOW);        //apagamos led rojo

}
