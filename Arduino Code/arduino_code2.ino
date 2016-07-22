void setup() 
{
  Serial.begin(9600); 
}
void loop() 
{
      int output[4];
      int valve_pin1;
      int h1,h2,h3,h4;
//for valve1
for(int i=0;i<4;)
{
      h1=analogRead(A0);
     
      {
        if(h1<300)
        {
          Serial.println(h1);
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println(h1);
           output[i]=0;
           delay(1500);
        }
      }
      i++;
      h2=analogRead(A1);
      {
        if(h2<300)
        {
          Serial.println(h2);
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println(h2);
           output[i]=0;
           delay(1500);
        }
      }
      i++;
      h3=analogRead(A2);
      {
        if(h3>900)
        {
          Serial.println(h3);
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println(h3);
           output[i]=0;
           delay(1500);
        }
      }
      i++;
      h4=analogRead(A3);
      {
        if(h4>900)
        {
          Serial.println("1");
          output[i]=1;
          delay(1500);
        }
        else
        {
           Serial.println("1");
           output[i]=0;
           delay(1500);
        }
      }
}
if((output[0]&&output[1]&&output[2]) ||  (output[1]&&output[2]&&output[3]) || (output[2]&&output[3]&&output[0]) || (output[3]&&output[0]&&output[1]))
   {
       digitalWrite(valve_pin1,HIGH);
   }
  
}
