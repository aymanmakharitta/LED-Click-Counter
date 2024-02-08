// C++ code
//
int button=6;
int ledr=2;
int ledy=3;
int ledg=4;
int x=0;
void setup()
{
  pinMode(button,INPUT);
pinMode(ledr,OUTPUT);pinMode(ledg,OUTPUT);pinMode(ledy,OUTPUT);
}

void loop()
{
 digitalRead(button);
if (digitalRead(button)==HIGH)
{
  x++;
  if (x==1)
  {digitalWrite(ledr,HIGH);
}
else if (x==2)
{digitalWrite(ledy,HIGH);
  }
  else if (x==3)
{digitalWrite(ledg,HIGH);
}
else
{digitalWrite(ledr,LOW);digitalWrite(ledy,LOW);digitalWrite(ledg,LOW);
  x=0;
  }
delay(500);
}
}