void turn90Right() {
  do {
    readSensors();
    MotorRun(230, -255);
     delay(200);
  }
  while (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1);
}

void turn90Left() {
  do {
    readSensors();
    MotorRun(-255, 180);
      delay(200);
  }
  while (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1);
}
