void setup()
//programa para picas dois Leds 
{
  pinMode(11, OUTPUT);//define saida
   pinMode(9, OUTPUT);//define saida

}

void loop()
{
  // Liga os LEDs
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);

  // Aguarda um curto período de tempo
  delay(800);

  // Desliga os LEDs
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);

  // Aguarda novamente
  delay(800);
