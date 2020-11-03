# ArduinoVoltOhmAmpMeter
Arduino Volt Ohm Amp Meter 

 Need to check a voltage don't have a voltmeter just had a few lines of code and one analogue input to your project and you can check voltages</br>
 
This repo has basic easy to use volt, ohm, and amp meters that can be used to test you build and its components.</br>
It also includes complete multimeter combining all three functions</br>
</br></br>

 disclaimer any voltage is applied 2 the  Arduino bust must be within manufacturers specifications accessory voltages May damage your equipment</br></br>

this project came about because many people in the Arduino community ask for help to fix can you build, when asked to check a voltage they say "I haven't got a voltmeter"  I realised the analogue inputs could be used as a vol tmeter, ohm meter and amp meter with minimal setup and only a few lines of code the point where the volt meter can easily be incorporated into any running project with the use of 1 analog input and used to check voltages
 </br>
 
 </br>
 
 <pre>
 float sensorValue = 0;
 float volts;
 void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  Serial.begin(9600);
}
 
void loop()
{
  // read the value from the sensor
  sensorValue = analogRead(A0);
  volts = 0.00488758555327 * sensorValue;
  Serial.print("A0 ");
  Serial.println(volts,3);
  delay(300); // Wait for millisecond(s)
} 
 
 
 </pre>
 </br></br></br></br></br></br></br></br></br></br></br>

