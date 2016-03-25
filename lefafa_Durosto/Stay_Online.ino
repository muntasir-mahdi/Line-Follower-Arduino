void stayOnline() {
  do {
    readSensors();
    MotorRun(200, 145);
  }
  while (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1);   /////////////////////////staying online/////////////////////////


  readSensors();
  if (s1 == 1 && s2 == 1 && s3 == 1) {                            ///////////////left = Black, losing line, going left//////////////////
    do {
      readSensors();
      MotorRun(215, -185);                                 /////////////////// go right to achieve line////////////////////
      //delay(30);
    }
    while ( s3 == 1 && s4 == 1);                      //////////achiveving line until s3 & s4 get White line/////////////////
  }

  readSensors();
  if (s1 == 1 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 1) {       /////////////// Sarp Turn At 30 Degree///////////
    do {
      MotorRun( 200, -200);
      delay(300);
    } while ( s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1);
  }

readSensors();
  if (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 1) {       /////////////// Sarp Turn At 80 Degree///////////
    do {
      MotorRun( 200, -200);
      delay(300);
    } while ( s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1);
  }
  
  do {
    readSensors();
    MotorRun(200, 145);   ///////////////////////////////staying online/////////////////////
  }
  while (s3 == 0 && s4 == 0);


  readSensors();
  if (s4 == 1 && s5 == 1 && s6 == 1) { /////////////////////////////////////////losing line, going right////////////////////////////
    do {
      readSensors();
      MotorRun(-215, 185);        ////////////////////////////////go left to achieve line/////////////////////////////////
      delay(30);
    }
    while ( s3 == 1 && s4 == 1);
  }
}
