#include <NewPing.h>

#define TRIGGER_PIN  22  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     23  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 30 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
#define threshold 340

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

int rmf = 37;
int rmb = 36;
int lmf = 45;       //initiating motor @Digital Pins
int lmb = 44;

int ENA = 9;        //Enabling motors @ pwm~9 & pwm~10 to control speed
int ENB = 10;

int  s1, s2, s3,       s4, s5, s6,      s7, s8, s9; //initiating sensor reading values
// s3 = left center reading; s2 = left near reading; s1 = left far reading;
// s4 = right center reading; s5 = right near reading; s6 = right far reading;

int sensor1 = 0;      //initiating  9 sensors @Analog Pins from A0 to A8
int sensor2 = 1;
int sensor3 = 2;
int sensor4 = 3;
int sensor5 = 4;
int sensor6 = 5;
int sensor7 = 6;
int sensor8 = 7;
int sensor9 = 8;

char pin[] =  {0, 1, 2, 3, 4, 5, 6, 7, 8};
int sensor[9];
String b;

//int b = s1 * 10 ^ 8 + s2 * 10 ^ 7  + s3 * 10 ^ 6 + s4 * 10 ^ 5 + s5 * 10 ^ 4 + s6 * 10 ^ 3 + s7 * 10 ^ 2 + s8 * 10 ^ 1 + s9 * 10 ^ 0 ;

void setup() {
  Serial.begin(9600);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor6, INPUT);
  pinMode(sensor7, INPUT);
  pinMode(sensor8, INPUT);
  pinMode(sensor9, INPUT);

  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);
  MotorRun(0, 0);

}

void loop() {
  readSensors();
  Online();

}
