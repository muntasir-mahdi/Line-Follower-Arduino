//
//#include <NewPing.h>
//
//#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
//#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
//#define MAX_DISTANCE 30 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
//
//NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

int s3, s2, s1, s4, s5, s6; //initiating sensor reading values
// s3 = left center reading; s2 = left near reading; s1 = left far reading;
// s4 = right center reading; s5 = right near reading; s6 = right far reading;

int sensor1 = 0;      //initiating sensor @Analog Pins from A0 to A5
int sensor2 = 1;
int sensor3 = 2;
int sensor4 = 3;
int sensor5 = 4;
int sensor6 = 5;

int trigger = 5;
int echo = 4;

int lmf = 10;       //initiating motor @Digital Pins
int lmb = 11;
int rmb = 12;
int rmf = 13;

int ENA = 6;        //Enabling motors @ ~6 & ~9 to control speed
int ENB = 9;

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor5, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor6, INPUT);

  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);

  //  pinMode(trigger, OUTPUT);
  //  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
//  delay(50);                      // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
//  //  int dis = sonardistance();
//  Serial.print("Ping: ");
//  //  Serial.print(dis); // Convert ping time to distance in cm and print result (0 = outside set distance range)
//  Serial.println("cm");

analogWrite(ENA, 200);
analogWrite(ENB, 140);
  readSensors();
  MotorRun(200, 145);
  followLine();


}






