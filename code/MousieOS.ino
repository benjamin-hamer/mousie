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
long duration;
int distance; //These first two are exclusively used in the function checkDist
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
  pinMode(4, OUTPUT); //Left forward
  pinMode(7, OUTPUT); //Left back
  pinMode(8, OUTPUT); //Right forward
  pinMode(12, OUTPUT); //Right back
}

int checkDist(int trigPin, int echoPin){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;
  return distance;
}
void loop(){
  distanceLeft = checkDist(leftTrigPin, leftEchoPin);
  distanceFront = checkDist(frontTrigPin, frontEchoPin);
  distanceRight = checkDist(rightEchoPin, rightEchoPin);
}
