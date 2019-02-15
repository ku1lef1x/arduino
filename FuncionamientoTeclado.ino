#include <Keypad.h>

// codigo necesario para el teclado 

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

//fin codigo necesario para funcionamiento teclado

char  tecla;
void setup() {

  Serial.begin(9600);       //abrimos el puerto serie

}

void loop() {

  tecla = teclado.getKey();           //tecla = a lo que marquemos en teclado

  if (tecla != NO_KEY){               //siempre que se pulse algo en la tecla:

    Serial.println(tecla);            //imprimir lo pulsado
  }

}
