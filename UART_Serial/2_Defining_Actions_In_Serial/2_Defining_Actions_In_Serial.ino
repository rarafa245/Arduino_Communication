/*Definindo de Ações no Monitor Serial*/

/*Declararemos aqui nossas variáveis de apoio:
  - Variaveis de identificação dos pinos utilizados
    - Strings para informação 
*/
int RedLED = 12;
int GreenLED = 13;
String start = "Welcome to the program!";
String RedBlink = "Red LED is Blinking!";
String GreenBlink = "Greed LED is Blinking!";
String Blink = "   You are in Blink #: ";
int numRedBlink;
int numGreenBlink;

/*Função Setup iniciando a comunicação UART
  e definindo as saidas como OUTPUT
*/
void setup(){
  
  Serial.begin(9600,SERIAL_8N1);
    
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  
  Serial.println(start);
}



/*Para ambos os leds fazemos o mesmo procedimento:
  mudamos seu estado alto/baixo e mostramos quantas vezes
    o LED piscou
*/
void loop(){
  
  /*Mecanismo para leitura de comando enviado no monitor Serial (Leitura de Int)*/
    Serial.println("Insira o numero de Blinks do LED Vermelho: ");
  while(Serial.available() == 0){ /*Em caso de falta de dados, o programa permanece inativo*/}
  numRedBlink =Serial.parseInt();
  
Serial.println(RedBlink);  
  for(int i=0; i<numRedBlink; i++){
    Serial.print(Blink); Serial.println((i+1));
    digitalWrite(RedLED, HIGH);
    delay(500);
    digitalWrite(RedLED,LOW);
    delay(500);
   }
  Serial.println(" ");
    
  Serial.println("Insira o numero de Blinks do LED Verde: ");
  while(Serial.available() == 0){ /*Em caso de falta de dados, o programa permanece inativo*/}
  numGreenBlink =Serial.parseInt();
  
Serial.println(GreenBlink);  
  for(int i=0; i<numGreenBlink; i++){
    Serial.print(Blink); Serial.println((i+1));
    digitalWrite(GreenLED, HIGH);
    delay(500);
    digitalWrite(GreenLED,LOW);
    delay(500);
   } 
  Serial.println(" ");
}
