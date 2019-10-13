/*Leitura de diferentes Dados UART*/

/*Variaveis de apoio:
  - String para nome do usuario
    - Int para idade do usuario
    - Float para altura do usuario*/

String nomeUsuario;
int idadeUsuario;
float alturaUsuario;


/*Função setup para abertura da linha de comunicação UART*/
void setup(){
  Serial.begin(9600); 
  Serial.flush();  
}


/*Funcão para leitura e escrita de elementos no monitor serial*/
void loop(){
  
  Serial.println("Determine o nome do Usuario: ");
  while(Serial.available() == 0){ /*Enquanto o usuario não inserir dados, o programa permanece inativo*/ }
  nomeUsuario = Serial.readString();
  
  Serial.println("Determine a idade do Usuario: ");
  while(Serial.available() == 0){ /*Enquanto o usuario não inserir dados, o programa permanece inativo*/ }
  idadeUsuario = Serial.parseInt();
  
  Serial.println("Determine a altura do Usuario: ");
  while(Serial.available() == 0){ /*Enquanto o usuario não inserir dados, o programa permanece inativo*/ }
  alturaUsuario = Serial.parseFloat();
  
  Serial.println(" ");
  
  Serial.print("  Ola,"); Serial.print(nomeUsuario); Serial.println("!");
  Serial.print("  Voce tem "); Serial.print(idadeUsuario); Serial.println(" anos de idade");
  Serial.print("  Tambem, vc tem "); Serial.print(alturaUsuario); Serial.println(" metros de altura");
  Serial.println(" ");

}
