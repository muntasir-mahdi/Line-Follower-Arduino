void stayOnline() {
  do {
    MotorRun(200, 180);
    readSensors();
  }
  while (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0 && s5 == 0 && s6 == 0 && s7 == 1 && s8 == 1 && s9 == 1); /////////////////////////staying online/////////////////////////

  readSensors();

  if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1) {                          ///////////////left = Black, losing line, going left//////////////////
    do {
      MotorRun(215, -185);
      delay(50);                              /////////////////// go right to achieve line////////////////////
      readSensors();
    }
    while ( s4 == 1);                      //////////achiveving line until s4 get White line/////////////////
  }

  readSensors();
  
  if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0 && s5 == 0 && s6 == 0 && s7 == 0 && s8 == 0 && s9 == 0) { /////////////// Sarp Turn Right At 90 Degree///////////
    do {
      MotorRun( 200, -200);
      delay(300);
    } while ( s4 == 1 || s5 == 1 || s6 == 1);  //////////while at least one of the center sensor is not in line
  }


  readSensors();
  if (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 0 && s7 == 1 && s8 == 1 && s9 == 1) { /////////////// Sarp Turn Left At 90 Degree///////////
    do {
      MotorRun( -200, 200);
      delay(300);
    } while ( s4 == 1 || s5 == 1 || s6 == 1);  //////////while at least one of the center sensor is not in line
  }

  readSensors();
  if (s6 == 1 && s7 == 1 && s8 == 1 && s9 == 1) { /////////////////////////////////////////losing line, going right////////////////////////////
    do {
      MotorRun(-215, 185);        ////////////////////////////////go left to achieve line/////////////////////////////////
      delay(300);
      readSensors();
    }
    while ( s4 == 1 || s5 == 1 || s6 == 1);           //////////while at least one of the center sensor is not in line

  }
}

//  readSensors();
//  if (s1 == 1 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 1) {       /////////////// Sarp Turn At 30 Degree///////////
//    do {
//      MotorRun( 200, -200);
//      delay(300);
//    } while ( s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1);
//  }


//  do {
//    readSensors();
//    MotorRun(200, 145);   ///////////////////////////////staying online/////////////////////
//  }
//  while (s4 == 0 && s5 == 0 && s6 == 0);

