/*Mostrando Ações no Monitor Serial*/

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
  
Serial.println(RedBlink);  
  for(int i=0; i<5; i++){
    Serial.print(Blink); Serial.println((i+1));
    digitalWrite(RedLED, HIGH);
    delay(500);
    digitalWrite(RedLED,LOW);
    delay(500);
   }
  Serial.println(" ");
    
Serial.println(GreenBlink);  
  for(int i=0; i<5; i++){
    Serial.print(Blink); Serial.println((i+1));
    digitalWrite(GreenLED, HIGH);
    delay(500);
    digitalWrite(GreenLED,LOW);
    delay(500);
   } 
  Serial.println(" ");
}
