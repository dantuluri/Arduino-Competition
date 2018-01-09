int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
  SetColor(255, 0, 0);  // red
  delay(1000);
  SetColor(0, 255, 0);  // green
  delay(1000);
  SetColor(0, 0, 255);  // blue
  delay(1000);
  SetColor(255, 255, 0);  // yellow
  delay(1000);  
  SetColor(80, 0, 80);  // purple
  delay(1000);
  SetColor(0, 255, 255);  // aqua
  delay(1000);
}

void SetColor(int red, int green, int blue)
{
  red = 255 - red;
  green = 255 - green;
  blue = 255 - blue;
  
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
