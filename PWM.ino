#define pot A0
#define led 3

void setup() {
  Serial.begin(9600);
  pinMode( pot, INPUT );
  pinMode( led, OUTPUT );

  digitalWrite( led, LOW );
}

void loop() {
  int valor = 0;
  int valor_lido = analogRead(pot);

  valor = map( valor_lido, 0, 1023, 0, 100);

  analogWrite( led, valor);
  Serial.println(valor);
}
