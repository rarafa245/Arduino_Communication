/*Codigo para Arduino Master: 
  Envio de daos I²C para Arduino Slave
    encadeando ação desejada (Acender LED)*/


/*Iremos apenas, inicialmente, incluir a biblioteca
Wire.h e instanciar uma variavel Byte*/
#include <Wire.h>


/*Função setup apenas disponibilizando a linha I²C para
a comunicação*/
void setup(){  
  Wire.begin();
}


/*Função Loop para envio de dados*/
void loop(){
 
/*No loop for, faremos a seguinte manobra:
  1. Iniciaremos a comunicação ao dispositivo informado - Wire.beginTransmission(Dispositovo)
    2. Enviaremos uma string de 4 Bytes: "ARM "
    3. Enviaremos um byte: 4
    4. Finalizaremos a comunicação I²C
  Após isso, esperaremos 2s*/
  
  Wire.beginTransmission(1);
  Wire.write("ARM ");
  
  Wire.endTransmission();
  
  delay(500);
    
  
  
}
