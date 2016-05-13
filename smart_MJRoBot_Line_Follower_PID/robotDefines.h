int mode = 0;

# define STOPPED 0
# define FOLLOWING_LINE 1
# define NO_LINE 2

const int power = 500;
const int iniMotorPower = 250;
const int adj = 1;
float adjTurn = 8;

const int ledPin = 13;
const int buttonPin = 9;

// LFSensor more to the Left is "0"
const int lineFollowSensor0 = 12; 
const int lineFollowSensor1 = 18; 
const int lineFollowSensor2 = 17; 
const int lineFollowSensor3 = 16;
const int lineFollowSensor4 = 19;

int LFSensor[5]={0, 0, 0, 0, 0};

// PID controller
float Kp=50;
float Ki=0;
float Kd=0;

float error=0, P=0, I=0, D=0, PIDvalue=0;
float previousError=0, previousI=0;

#define RIGHT 1
#define LEFT -1

Servo leftServo;
Servo rightServo;


