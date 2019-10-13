/*Comunicação entre Arduinos - Rx*/

/*Inicialmente, ambos os arduinos devem ser ligados em uma
   mesma fonte de tensão*/

/*Variavel para recebimento de dados*/
String recebimento;


void setup(){  
  Serial.begin(9600);
  Serial.flush(); 
}


void loop(){
  
  while(Serial.available() == 0){/*Enquanto não há dados recebidos, o codigo se encontra inativo*/}
  recebimento = Serial.readString();
  
  Serial.println(recebimento);
}
