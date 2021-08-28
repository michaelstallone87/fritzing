//Programa : Pisca Led Arduino
//Autor : FILIPEFLOP

//Criando contador
int contador = 1000;
void setup()
{
//Define a porta do led como saida 
pinMode(13, OUTPUT);

Serial.begin(9600);
}

void loop()
{
//Acende o led 
digitalWrite(13, HIGH);

//Aguarda o intervalo especificado 
delay(contador);

//Apaga o led 
digitalWrite(13, LOW); 

//Aguarda o intervalo especificado 
delay(contador);
contador = contador*0.95;
Serial.print(contador, DEC);
Serial.print(", ");

if (contador == 0)
{
Serial.println("Reiniciando contador...");
contador = 1000;
Serial.print(contador, DEC);
Serial.print(", ");
}
} 
