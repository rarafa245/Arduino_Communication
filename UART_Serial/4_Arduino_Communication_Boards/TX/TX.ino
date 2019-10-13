/*Comunicação entre Arduinos - Tx*/

/*Inicialmente, ambos os arduinos devem ser ligados em uma
   mesma fonte de tensão*/

  String envio;

/*Inicio da comunicaçao serial*/
void setup(){  
  Serial.begin(9600);
  Serial.flush();
}

/*Enviando numeros 0 -50 para a linha Serial*/
void loop(){
  
  for(int i=0; i<50; i++){
   envio = "Fala Mano" + String(i);
    Serial.println(envio);
    delay(250);
  }
  
}
