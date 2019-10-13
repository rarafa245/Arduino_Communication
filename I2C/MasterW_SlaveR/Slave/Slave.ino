/*Codigo para Arduino Slave:
  Recebimento de dados encadeando
    ação desejada (ascender LED)*/

/*Iremos, inicialmente, incluir a biblioteca Wire.h
  e adicionar uma variavel para recebimento de dados(data)*/
#include <Wire.h>
byte data;


/*Na função setup, iremos fazer o seguinte comando: 
  1. Dexaremos disponivel a comunicação I²C informando o endereço do
       Arduino Slave - Wire.begin(Endereço)
    2. Iniciaremos a comunicação serial UART
    3. Usaremos a interrupção para iniciar a função
       desejada - Wire.onReceive(Função)*/
void setup(){
 
 Wire.begin(1);
 Serial.begin(9600); 
 Wire.onReceive(receiveEvent);  
  
}


/*Função chamada pela interrupção*/
void receiveEvent(int howMany){
 
  /*comando para o primeiro recebimento de dados: "Arm "
    1. Condição para que todos os bytes da linha sejam
      recebidos: (1<Wire,available())
    2. A função Wire.read() lerá o primeiro Byete e deixara
       o proximo byte preparado para a proxima leitura
    3. Mostraremos o resultado na linha serial - Serial.print()*/
  while(1 < Wire.available()){
     char c = (char)Wire.read();
    Serial.print(c);
  }
  /*Comando para o segundo recebimento de dados: "x"
    Como temos apenas um Byte de dados, receberemos o
    valor em data por Wire.read()*/
  data = Wire.read();
  Serial.println(data);
}


void loop(){

  
   
}
