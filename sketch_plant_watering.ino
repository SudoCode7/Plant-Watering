#include<Narcoleptic.h>
const byte l=0;
byte d=l, n=8; //n represents number of plants
void setup()
{
 for(byte i=0;i<n;i++)
 {
  pinMode(l+i,OUTPUT);
 }

}

void loop()
{  
  for(byte i=0;i<n;i++)
  {
   if(d==2||d==3||d==4) // n number of motors can be added according to water requirements with delay time to trigger the motor for the time limit
    {
      digitalWrite(d,HIGH);
      Narcoleptic.delay(4000);
      digitalWrite(d,LOW);
    }
  d++;
  }
  
 Narcoleptic.delay(86400000); // for 1 day delay (in seconds)

}
