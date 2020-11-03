# ArduinoVoltOhmAmpMeter
Arduino Volt Ohm Amp Meter 

 Need to check a voltage don't have a voltmeter just add a few lines of code and one analogue input to your project and you can check voltages</br>
 
This repo has basic easy to use volt, ohm, and amp meters that can be used to test you build and its components.</br>
It also includes complete multimeter combining all three functions</br>
</br></br>

 disclaimer any voltage is applied to your Arduino bust must be within manufacturers specifications excessive voltages May damage your equipment</br></br>


 </br>
 
 </br>
 The following code will display the voltage on input A0 pin in Serial Monitor.
 <pre>
 
 void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop()
{
  Serial.print("A0 ");
  Serial.println((0.00488758555327 * analogRead(A0)),3);
  delay(300); // Wait for millisecond(s)
}  
 </pre>
 </br></br></br></br></br></br></br></br></br></br></br>

