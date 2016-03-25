int lmf = 24;       //initiating motor @Digital Pins
int lmb = 25;
int rmf = 45;
int rmb = 44;

int  s1, s3, s2,       s4, s5, s6,      s7, s8, s9; //initiating sensor reading values
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



int ENA = 8;        //Enabling motors @ pwm~8 & pwm~9 to control speed
int ENB = 9;



void setup() {
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
  MotorRun(200, 180);
  followLine();
}
