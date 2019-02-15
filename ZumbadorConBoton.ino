const int pinBuzzer = 13;
int pulsador = 8; 
 
void setup() 
{
  pinMode(pinBuzzer, OUTPUT);

  pinMode(pulsador, INPUT_PULLUP);
}
 
void loop() 
{

  int lectura = digitalRead(pulsador);

  if(lectura == LOW){
  //generar tono de 440Hz durante 1000 ms
  tone(pinBuzzer, 440);
  delay(1000);
 
  //detener tono durante 500ms  
  noTone(pinBuzzer);
  delay(500);
 
  //generar tono de 523Hz durante 500ms, y detenerlo durante 500ms.
  tone(pinBuzzer, 523, 300);
  delay(500);
}
}
