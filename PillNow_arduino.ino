#include <SoftwareSerial.h>

int cds = A0;
SoftwareSerial BTSerial(2,3); // TX : 2 || RX : 3

void setup()
{
  BTSerial.begin(9600);
  Serial.begin(9600);
  BTSerial.println("C");
}

void loop()
{
  int cdsValue = analogRead(cds);
  Serial.print("cds = ");
  Serial.println(cdsValue);
  if(cdsValue <= 350) {
    BTSerial.println("O");
  }
  delay(1000);
}
