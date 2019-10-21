int BUTTON=2;
int e=0;
  void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  for(int i=5;i<11;i++)
  {pinMode(i,OUTPUT);
  }
}

void loop()
{ int i;
  int d = analogRead(A0);
  int e= digitalRead(2);
  Serial.println(d);
 Serial.println(e);
  delay(100);
  if(d>300)
  { if(e == HIGH)
  { for(int i=5;i<11;i++)
  {allLEDsOff;
   if(i!=10)
  {digitalWrite(i,HIGH);
   digitalWrite(i+1, HIGH);
   delay(100);
  }
   else
   { digitalWrite(i,HIGH);
   digitalWrite(i-5,HIGH);
   delay(100);
   allLEDsOff();
   }
  }
  }
   else
   { for(int i=5;i<11;i++)
   {if(i%2!=0)
   {digitalWrite(i,HIGH);
   }}   delay(200);
      allLEDsOff();
   
   
   for(int i=5;i<11;i++)
   { if(i%2==0)
   { digitalWrite(i,HIGH);
   }}     delay(200);
        allLEDsOff();
   
   
  }
   }

  else
  { allLEDsOff();
}
}   
    
  void allLEDsOff(void)
  { 
    for( int i=5;i<11;i++)
  {digitalWrite(i,LOW);
  }
    delay(200);
  }
       