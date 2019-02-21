//Librerias necesarias para el funcionamiento del LCD
#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>                 //debemos descargar esta libreria

LiquidCrystal_I2C lcd(0x27,16,2);               //indicamos como es nuestro lcd
 
void setup()
{
  // Ininiciamos
  lcd.init();
  //brillo a la pantalla
  lcd.backlight();
  // Mover el cursor a la primera posición de la pantalla (0, 0)
  lcd.setCursor (0,0);
  // Imprimir "Hola Mundo" en la primera linea
  lcd.print("Hola");
  // Mover el cursor a la segunda linea (1) primera columna (0)
  lcd.setCursor ( 0,1 );
  // Imprimir otra cadena en esta posicion
  lcd.print("Mundo");
  // Esperar un segundo
  delay(1000);
}
 
void loop()
{
  // EN EL CICLO PRINCIPAL SOLAMENTE RECORREMOS EL MENSAJE DE UN LADO A OTRO
  // Variable para conteo de ciclos
  int i;
 
  // Desplazar la pantalla a la derecha 5 veces
  for ( int i = 0; i < 5; i++ ) {
    lcd.scrollDisplayRight();
    delay (1000);
  }
 
  // Desplazar la pantalla a la izquierda 5 veces
  for ( int i = 0; i < 5; i++ ) {
    lcd.scrollDisplayLeft();
    delay (1000);
 }
}
