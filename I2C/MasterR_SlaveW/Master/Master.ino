/*Codigo Arduino Master: 
  solicitação de envio de dados e
    ação realizada (Acender LED)*/

/*Apenas iremos incluir a biblioteca Wire.h*/
#include <Wire.h>

String Recebidos;

/*Na função setup, iniciaremos a habilitaremos a comunicações
 I²C (Wire.begin()) e UART (Serial.begin())*/
void setup(){
  
  Wire.begin();
  Serial.begin(9600);
  
}


/*Na função loop, faremos a seguinte manobra:
  1. iremos solicitar do componente desejado uma quantidade
       especifica de bytes - Wire.requestFrom(Endereço,Bytes)
    2. Enquanto houver dados sendo enviados (Wire.available()),
       a variavel c receberá cada byte (Wire.read())
    3. Enviaremos os valores para o monitor serial - Serial.printl(c)*/
void loop(){
  
  Wire.requestFrom(8,7);
  

  while(Wire.available()){

   Recebidos += (char)Wire.read();
  }

  Serial.println(Recebidos);
  Recebidos = "";
  delay(500);   
}
