#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Keypad.h>

LiquidCrystal_I2C lcd (0x27, 16, 2);

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

Keypad teclado = Keypad (makeKeymap(teclas), pinsFilas, pinsColumnas, filas, columnas);
char tecla;


void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
 
}

void loop() {
 
  tecla = teclado.getKey();

  if (tecla != NO_KEY){
    if (tecla == 50){
      lcd.setCursor(0,1);
      lcd.println("CORRECTO");
      delay(1000);
      lcd.clear();
      lcd.print("Bienvenido");
      delay(2000);
      lcd.clear();
      
    }
    else{
      lcd.setCursor(0,1);
      lcd.println("INCORRECTO");
      delay(4000);
      lcd.clear();
    }
  }

  
}
