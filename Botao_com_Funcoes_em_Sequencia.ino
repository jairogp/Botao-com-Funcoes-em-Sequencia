
  #define led1 2
  #define led2 3
  #define led3 4
  #define botao 8
  int leitura1 = 0;
  int aumenta = 0;   
  byte contador =0;      

  void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);    
  pinMode(led3, OUTPUT);
  pinMode(botao, INPUT);     
  }

  void loop(){
  while (contador < 4) 
  {  
  leitura1 = digitalRead(botao);
  if (leitura1 != 0)
  {while(digitalRead(botao) != 0)
  {delay(100);}
  }  
    
  aumenta = digitalRead(botao);    
  if(aumenta!=1){ 
  contador=contador+1;
  delay(200); 
  while(digitalRead(botao)!=1) 
  Serial.println(contador);
  }

  switch (contador)  
  {
    case 1:
    digitalWrite(led1, 1);
    digitalWrite(led2, 0);
    digitalWrite(led3, 0);
    break;
         
    case 2:
    digitalWrite(led1, 0);
    digitalWrite(led2, 1);
    digitalWrite(led3, 0);
    break;
         
    case 3:
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
    digitalWrite(led3, 1);
    break;
  
    case 4:
    digitalWrite(led1, 0);   
    digitalWrite(led2, 0);  
    digitalWrite(led3, 0);  
    break;
  }
  }  
  contador = 0;
  }


