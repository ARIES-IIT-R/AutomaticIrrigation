
      int valve_pin2 = 7;
      int valve_pin3 = 8;
void setup()
{
     Serial.begin(9600);
     pinMode(valve_pin2, OUTPUT);
     pinMode(valve_pin3, OUTPUT);
}

void loop() 
{
      int output[6];
      int h5,h6,h7,h8,h9,h10;
  //valve2
for(int i=4;i<8;)

{
      h5=analogRead(A0);
      {
        if(h5>900)
        {
          Serial.println("Dry soil");
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println("Humid soil");
           output[i]=0;
           delay(1500);
        }
      }
      i++;
      h6=analogRead(A1);
      {
        if(h6>900)
        {
          Serial.println("Dry soil");
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println("Humid soil");
           output[i]=0;
           delay(1500);
        }
      }
      i++;
      h7=analogRead(A2);
      {
        if(h7>900)
        {
          Serial.println("Dry soil");
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println("Humid soil");
           output[i]=0;
           delay(1500);
        }
      }
      
}
 if((output[4]&&output[5]) ||  (output[5]&&output[6]) || (output[6]&&output[4]))
   {
       digitalWrite(valve_pin2,LOW);
  }

//valve3
for(int i=6;i<10;)
{
      h8=analogRead(A3);
      {
        if(h8>900)
        {
          Serial.println("Dry soil");
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println("Humid soil");
           output[i]=0;
           delay(1500);
        }
      }
      i++;
      h9=analogRead(A4);
      {
        if(h9>900)
        {
          Serial.println("Dry soil");
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println("Humid soil");
           output[i]=0;
           delay(1500);
        }
      }
      i++;
      h10=analogRead(A5);
      {
        if(h10>900)
        {
          Serial.println("Dry soil");
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println("Humid soil");
           output[i]=0;
           delay(1500);
        }
      }
}
if((output[7]&&output[8]) ||  (output[8]&&output[9]) || (output[9]&&output[7]))
        {
       digitalWrite(valve_pin3,LOW);
        }


}
