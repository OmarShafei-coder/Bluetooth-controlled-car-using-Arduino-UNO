// PIN DIRECTION
#define RD1 11 // RIGHT FORWARD
#define RD2 12 // RIGHT BACKWARD
#define LD1 10 // LEFT  FORWARD
#define LD2 9  // LEFT  BACKWARD
// PIN SPEED
#define RS 3 // RIGHT SPEED
#define LS 6 // LEFT SPEED
void forward()
{
digitalWrite(RD1, HIGH);
digitalWrite(RD2, LOW);
digitalWrite(LD1, HIGH);
digitalWrite(LD2, LOW);
analogWrite(RS,255);
analogWrite(LS,255);
}

void backward()
{
digitalWrite(RD1, LOW);
digitalWrite(RD2, HIGH);
digitalWrite(LD1, LOW);
digitalWrite(LD2, HIGH);
analogWrite(RS,255);
analogWrite(LS,255);
}

void right()
{
digitalWrite(RD1, HIGH);
digitalWrite(RD2, LOW);
digitalWrite(LD1, LOW);
digitalWrite(LD2, HIGH);
analogWrite(RS,150);
analogWrite(LS,255);
}

void left()
{
digitalWrite(RD1, LOW);
digitalWrite(RD2, HIGH);
digitalWrite(LD1, HIGH);
digitalWrite(LD2, LOW);
analogWrite(RS,255);
analogWrite(LS,150);
}

void Stop()
{
digitalWrite(RD1, LOW);
digitalWrite(RD2, LOW);
digitalWrite(LD1, LOW);
digitalWrite(LD2, LOW);
}
void setup()
{
Serial.begin(9600);
pinMode(RD1, OUTPUT);
pinMode(RD2, OUTPUT);
pinMode(LD1, OUTPUT);
pinMode(LD2, OUTPUT);
pinMode(RS, OUTPUT);
pinMode(LS, OUTPUT);
}
void loop()
{
while(Serial.available())
{
char data = Serial.read();
Serial.println(data);

if(data =='F') // forward
{
forward();

}

else if(data =='B') //backward
{
backward();

else if(data =='R') // RIGHT
{
right();
}
else if(data =='L') //LEFT
{
left();

}

}
else if(data =='S') //stop
{
Stop();

}

}
}
