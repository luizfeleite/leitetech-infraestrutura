int Psensor = A0;
int Lverde = 8;
int Lamarelo = 9;
int Lvermelho = 10;

int leitura = 0;
float tensao = 0;
float temperaturaC = 0;

void setup()
{
  pinMode(Psensor, INPUT);
  pinMode(Lverde, OUTPUT);
  pinMode(Lamarelo, OUTPUT);
  pinMode(Lvermelho, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  leitura = analogRead(Psensor);
  tensao = leitura * 5.0 / 1023.0;
  temperaturaC = (tensao - 0.5) * 100.0;

  Serial.print("Leitura = ");
  Serial.println(leitura);
  Serial.print("Temperatura = ");
  Serial.print(temperaturaC);
  Serial.println(" C");

  if (temperaturaC < 28)
  {
    digitalWrite(Lverde, HIGH);
    digitalWrite(Lamarelo, LOW);
    digitalWrite(Lvermelho, LOW);
  }
  if (temperaturaC >= 28 && temperaturaC < 32)
  {
    digitalWrite(Lverde, LOW);
    digitalWrite(Lamarelo, HIGH);
    digitalWrite(Lvermelho, LOW);
  }
  if (temperaturaC >= 32)
  {
    digitalWrite(Lverde, LOW);
    digitalWrite(Lamarelo, LOW);
    digitalWrite(Lvermelho, HIGH);
  }

  delay(500);
}