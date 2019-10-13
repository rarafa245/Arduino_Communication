/*Codigo Arduino Slave: 
  Envio de dados solicitados*/

/*Iremos apenas incluir a biblioteca Wire.h*/
#include <Wire.h>

/*Iniciaremos a comunicação I²C definindo o endereço do
Arduino slave e usaremos a interrupção de requerimento
onRequest(requestEvent)*/
void setup(){
  
  Wire.begin(8);
  Wire.onRequest(requestEvent);
}


/*Não há necessidade de utilização da função loop*/
void loop(){
  
  delay(100); 
  
}

/*Apenas iremos enviar a String "Hello !"*/
void requestEvent(){
  
 Wire.write("Hello !"); 
  Wire.write("Oi");
  
}
