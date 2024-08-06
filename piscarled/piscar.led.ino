void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);// definindo a porta 7 como saida 

}

void loop() {
  digitalWrite(7, HIGH);// liga o Led
  delay(1000);// espere 1 seg.
  digitalWrite(7, LOW);// desliga o led 
  delay(1000);// espere 1 seg.
}
