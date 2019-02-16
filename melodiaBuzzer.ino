/*Para pitches.h: (libreria de notas)

Flecha de debajo del monitor serial ("lupa") > Nueva pestaña > le damos nombre pitches.h > copiamos el contenido del archivo y guardamos*/



#include "pitches.h"  //añadimos la libreria de notas
 
//estas son las notas que tendra la melodia
int melody[]={NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
 
//conectamos el boton al pin 12
int buttonPin= 12;
 
//note durations. 4=quarter note / 8=eighth note
int noteDurations[]={4, 8, 8, 4, 4, 4, 4, 4};
 
 
void setup(){
 
  //hacemos que el pin del boton detecte entradas 
  pinMode(buttonPin, INPUT_PULLUP);
}
 
 
void loop(){
 
  //leemos la entrada del pin del boton
  int buttonState = digitalRead(buttonPin);
 
  //si el boton se ha pulsado
  if (buttonState == LOW){
 
    //recorremos las notas de la melodia del 0 al 8 no incluido
    for (int thisNote=0; thisNote <8; thisNote++){
 
      //Para calcular la duracion de la nota cogemos un segundo y lo dividimos entre el tipo de nota
      int noteDuration = 1000 / noteDurations [thisNote];
      tone(8, melody [thisNote], noteDuration);
 
      //Para distinguir las notas establecemos un tiempo minimo entre ellas
      //un incremento de duracion del 30% cada nota trabaja bien
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
 
      //paramos la melodía
      noTone(8);
    }
  }
}
