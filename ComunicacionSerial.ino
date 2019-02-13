/*A través de la conexión serial, con la herramienta MonitorSerial, podemos enviar o recibir información a través del puerto serie. 
  Para iniciar la conexion serial, en el setup debemos establecer siempre el siguiente comando:
  
          Serial.begin(9600);
  
  El valor 9600 hace referencia a los baudios que manejará el puerto serie. 
  */
  int entrada;
  
  void setup() {

  Serial.begin(9600);

}

void loop() {

  //Serial.println('1');           //hara que muestre por el monitor serial 1, 1, 1, 1,......
  //delay(1000);                   //habra intervalor de 1s entre cada 1,

  if (Serial.available()>0){       //limita la ejecucion del codigo a cuando haya datos disponibles en el puerto serie. Como hay datos para leer, entra

    entrada=Serial.read();
    Serial.println(entrada-48); //lo intrudido lo muestra en formato ASCII, por tanto, para que muestre el numero, le restamos 48.
  }

}
