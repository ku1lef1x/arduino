#include <LiquidCrystal_I2C.h>              //librerias para LCD
#include <Wire.h>                           //libreria necesaria
#include <Keypad.h>                         //libreria teclado

LiquidCrystal_I2C lcd (0x27, 16, 2);        //variable lcd para indicar tipo LCD
 
//inicio configuracion teclado
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

Keypad teclado = Keypad (makeKeymap(teclas), pinsFilas, pinsColumnas, filas, columnas);           //variable teclado de tipo Keypad
//fin configuracion teclado

char tecla;


void setup() {
  lcd.init();          //iniciamos lcd
  lcd.backlight();    //damos brillo  
  lcd.clear();
 
}

void loop() {
 
  tecla = teclado.getKey();                   //variable tecla = a lo que pulsemos en teclado

  if (tecla != NO_KEY){                       //detecta que se este pulsando una tecla
    if (tecla == 50){                         //queremos que contraseña = 2, como recoge datos en ASCII, 2 = 50 (2+48)
      lcd.setCursor(0,1);
      lcd.println("CORRECTO");                //nos admite el accedo
      delay(1000);
      lcd.clear();
      lcd.print("Bienvenido");               //muestra mensaje de bienvenida
      delay(2000);
      lcd.clear();
      
    }
    else{                                     //en caso de no usar el pass correcto no muestra INCORRECTO
      lcd.setCursor(0,1);
      lcd.println("INCORRECTO");
      delay(4000);
      lcd.clear();
    }
  }

  
}
