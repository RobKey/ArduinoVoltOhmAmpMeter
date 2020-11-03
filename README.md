# ArduinoVoltOhmAmpMeter
Arduino Volt Ohm Amp Meter 

 Need to check a voltage don't have a voltmeter just add a few lines of code and one analogue input to your project and you can check voltages</br>
 
This repo has basic easy to use volt, ohm, and amp meters that can be used to test you build and its components.</br>
It also includes complete multimeter combining all three functions</br>
</br></br>

 disclaimer any voltage is applied to your Arduino bust must be within manufacturers specifications excessive voltages May damage your equipment</br></br>

this project came about because many people in the Arduino community asking for help to fix their build, when asked to check a voltage they say "I haven't got a voltmeter"  I realised the analogue inputs could be used as a volt meter, ohm meter and amp meter with minimal setup and only a few lines of code the point where the volt meter can easily be incorporated into any running project with the use of 1 analog input and used to check voltages
 </br>
 
 </br>
 The following code will display the voltage on input A0 pin.
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

