#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>
// Adafruit_PCD8544(CLK,DIN,D/C,CE,RST);
Adafruit_PCD8544 display = Adafruit_PCD8544(7, 6, 5, 4, 3);

float sensorValue = 0;
float volts;
float voltsa;
float lvolts;
float lvoltsa;
int funct = 2; // 1 = V 2 = R 3 = I

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(13, OUTPUT);
  //Serial.begin(9600);
  display.begin();
  display.setContrast(50);
  display.clearDisplay();
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
}

void loop()
{
  
  if(digitalRead(9) == LOW) {
    funct = 1;
  }
  if(digitalRead(10) == LOW) {
    funct = 2;
  }
  
  sensorValue = analogRead(A0);
  volts = 0.00488758555327 * sensorValue;
  sensorValue = analogRead(A1);
  voltsa = 0.00488758555327 * sensorValue;
  if ( funct == 1){                               // 1 = V 2 = R 3 = I
    if (volts != lvolts || voltsa != lvoltsa){
      screen(volts, voltsa);
    }
  }
  //find Rx voltage divider 5V+ -> 10K -> Rx -> 0V  voltsa is voltage across Rx
  if ( voltsa != lvoltsa){ 
    if (funct == 2 ){                                            
      float R;
      float I;
      I = (5 - voltsa) / 10000;
      R = voltsa / I;      
      screen(R, voltsa);
    }
  }
  delay(200);
  display.clearDisplay();  
}
void screen(float v1,float v2){
  //int Rd = 0;
  display.setCursor(10,5);
  display.setTextSize(2);
  if (funct == 2){
    if (v1 >= 1000){
      display.print(v1 / 1000,0);
      display.print("K");
    }else{
     display.print(v1,0); 
    }
  }else{
    display.print(v1,3);
  }
  display.setTextSize(1);
  if (funct == 2){   
    display.write(233);
  }else{
    display.println("v");
  }
  display.setTextSize(2);
  display.setCursor(10,24);
  display.print(v2,3);
  display.setTextSize(1);
  display.println("v");
  display.display();  
}

  
