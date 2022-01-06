//define the trigger pins for the ultrasonic sensors
const int leftTrigPin = 3;
const int frontTrigPin = 6;
const int rightTrigPin = 10;

//define the echo pins for the ultrasonic sensors
const int leftEchoPin = 5;
const int frontEchoPin = 9;
const int rightEchoPin = 11;

//select the pin for the IR sensor to communicate with
int irpin = 2;

//define variables for distance calculations
long durationLeft;
long durationFront;
long durationRight;
int distanceLeft;
int distanceFront;
int distanceRight;
int a = 0;

void setup(){
  //set the trigger pins as outputs
  pinMode(leftTrigPin, OUTPUT);
  pinMode(frontTrigPin, OUTPUT);
  pinMode(rightTrigPin, OUTPUT);
  //set the echo pins as inputs
  pinMode(leftEchoPin, INPUT);
  pinMode(frontEchoPin, INPUT);
  pinMode(rightEchoPin, INPUT);
  //set the pins for the motor controller as outputs
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
}
