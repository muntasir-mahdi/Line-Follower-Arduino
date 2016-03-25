#include <NewPing.h>

#define TRIGGER_PIN  22  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     23  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 30 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

int lmf = 45;       //initiating motor @Digital Pins
int lmb = 44;
int rmf = 37;
int rmb = 36;

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

int d = s1 * 1 + s2 * 2 + s3 * 4 + s4 * 8 + s5 * 16 + s6 * 32 + s7 * 64 + s8 * 128 + s9 * 256 ;
//int b = s1 * 10 ^ 8 + s2 * 10 ^ 7  + s3 * 10 ^ 6 + s4 * 10 ^ 5 + s5 * 10 ^ 4 + s6 * 10 ^ 3 + s7 * 10 ^ 2 + s8 * 10 ^ 1 + s9 * 10 ^ 0 ;


int ENA = 9;        //Enabling motors @ pwm~9 & pwm~10 to control speed
int ENB = 10;



void setup() {
  Serial.begin(115200);
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

}

void loop() {

  readSensors();
  Online();

}
