#include<Narcoleptic.h>
const byte l=0;
byte d=l, n=8;//pin number plus 2 &&  n= number of plants
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
   if(d==2||d==3||d==4)// can be added n numbers of if else according to water requirements with delay times
    {
      digitalWrite(d,HIGH);
      Narcoleptic.delay(4000);
      digitalWrite(d,LOW);
    }
  d++;
  }
  
 Narcoleptic.delay(86400000);// for 1 day delay

}
