int pin = 13;
int entrada;

void setup() {
  // put your setup code here, to run once:

  pinMode(pin, OUTPUT);             //abrimos el pin13
  digitalWrite(pin, HIGH);          //iniciamos con el led encendido

  Serial.begin(9600);               //habilita la conexion serial
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
    
  if (Serial.available()>0){            //comprobamos que haya datos en el puerto
   
    entrada=Serial.read();              //leemos entrada
       
    if (entrada == '1'){                //si la entrada es 1, activa el pin 13 (enciende led)
    
      digitalWrite(pin,HIGH);
      delay(3000);
    }
    
    
    else{
    
      digitalWrite(pin,LOW);            //sino, desactiva el pin 13 (apaga led)
      delay(3000);
    }

    digitalWrite(pin,LOW);
  }
}
