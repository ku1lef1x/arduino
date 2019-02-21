#include <LiquidCrystal_I2C.h>            //libreria para LCD
#include <Wire.h>                         //libreria necesaria
#include <Keypad.h>                       //libreria para el teclado


LiquidCrystal_I2C lcd (0x27, 16, 2);      //indicamos tipo de teclado con variable lcd


//configuracion teclado
const byte filas = 4;
const byte columnas = 4;
byte pinsFilas[filas] =  {8, 7, 6, 5};        //en orden: F1, F2, F3, F4        F=filas
byte pinsColumnas[columnas]={4,3,2,9};          //en orden: C1, C2, C3, C4        C=columnas

char teclas [filas][columnas] = {

  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

Keypad teclado = Keypad (makeKeymap(teclas), pinsFilas, pinsColumnas, filas, columnas);       //variable teclado de tipo Keypad
//fin configuracion teclado

char tecla;
char letra;

void setup() {

  lcd.init();                 //iniciamos LCD
  lcd.backlight();            //damos brillo
  
}

void loop() {

  tecla = teclado.getKey();             //variable tecla = lo que pulsemos en teclado
 
  if (tecla != NO_KEY){                 //si pulsamos el teclado:

    lcd.print(tecla);                   //mostramos tecla pulsada en el LCD
    delay(1000);                        //dura un segundo y limpia el lcd para mostrar nueva pulsacion
    lcd.clear();
  }

  
}
