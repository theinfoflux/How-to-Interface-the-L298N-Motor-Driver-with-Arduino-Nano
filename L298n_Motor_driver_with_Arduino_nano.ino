//Assign Names to Pins
const int Speed_Pin  = A0; //Speed Control Pin
//Motor Driver Pins
const int IN1 = 2;
const int IN2 = 3;
const int ENA = 9;
 
void setup ()  
{

  pinMode(Speed_Pin, INPUT);  // Set the pin as INPUT
  
  // Motor
  pinMode(IN1, OUTPUT);  // Set the pin as OUTPUT 
  pinMode(IN2, OUTPUT);  // Set the pin as OUTPUT 
  pinMode(ENA, OUTPUT);   //PWM Pin
}  
void loop ()  
{
  int Speed_Value = analogRead(Speed_Pin);  // read the input on pin: 
  int Motor_Speed = map(Speed_Value, 0,1023, 0,255);
  analogWrite(ENA, Motor_Speed); //PWM Signal to control the speed of motor. (0 - 255)
    // Start Motor Clockwise
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    delay(10000);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    delay(2000);
    // Start Motor AntiClockwise
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    delay(10000);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    delay(2000);

}
