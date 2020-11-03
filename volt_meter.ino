float sensorValue = 0;
float volts;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A0);
  volts = 0.00488758555327 * sensorValue;
  Serial.print("A0 ");
  Serial.print(volts,3);
  sensorValue = analogRead(A1);
  volts = 0.00488758555327 * sensorValue;
  Serial.print(" volts A1 ");
   Serial.print(volts,3);
  Serial.println(" volts ");
  // turn the LED on
  digitalWrite(13, HIGH);
  delay(sensorValue); // Wait for sensorValue millisecond(s)

  delay(sensorValue); // Wait for sensorValue millisecond(s)
}
