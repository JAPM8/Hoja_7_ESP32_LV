//Javier Alejandro Pérez Marín
const int pot1 = 35, pot2 = 34, pot3 = 39, pot4 = 36; //Declaración de pines
int Valpot1 = 0, Valpot2 = 0, Valpot3 = 0, Valpot4 = 0; //Variables para lectura

void setup() {
  Serial.begin(115200); //Inicio del serial a 115200
  delay(1000);
}

void loop() { //Ciclo que se repite cada 250 ms
  Valpot1 = map(analogRead(pot1), 0, 4095, 0, 255); //Lectura y mapeo de pot 1
  Valpot2 = map(analogRead(pot2), 0, 4095, 0, 255); //Lectura y mapeo de pot 2
  Valpot3 = map(analogRead(pot3), 0, 4095, 0, 255); //Lectura y mapeo de pot 3
  Valpot4 = map(analogRead(pot4), 0, 4095, 0, 255); ////Lectura y mapeo de pot 4
  //Impresión consecutiva de valores separados por coma
  Serial.print(Valpot1); 
  Serial.print (",");
  Serial.print(Valpot2);
  Serial.print (",");
  Serial.print(Valpot3);
  Serial.print (",");
  Serial.println(Valpot4);
  delay(250);
}
