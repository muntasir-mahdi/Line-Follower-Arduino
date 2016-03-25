void Online() {
  readSensors();
  //condition 1: if middle sensors are online, go forward;

  if ( d == 455) {                  // 111 000 111 == 455
    MotorRun(200, 180);
  }

  //condition 2: if one of the Left middle sensors is in black, get back to line by going right

  else if (d == 487) {             // 111 100 111 == 487
    MotorRun(200, -180);
  }

  //condition 3: if one of the Right middle sensors is in black, get back to line by going Left

  else if (d == 463) {            // 111 001 111 == 463
    MotorRun(-200, 180);
  }

  //condition 4: if All of the Right Sensors are in White, Turn 90 Degree Right

  else if ( d == 480) {          //1111 00000 == 480
    MotorRun(200, -180);
  }
  //condition 5: if All of the Left Sensors are in White, Turn 90 Degree Left

  else if ( d == 15) {          //00000 1111 == 15
    MotorRun(-200, 180);
  }

  //condition 6: if All of the Sensors are in Black, follow wall.
  else if (d == 511) {         //111 111 111 == 511
    wall_follow();
    // MotorRun(200, 180);
  }
  //condition 7: if All of the Sensors are in White, Go Ahead.
  else if (d == 0) {           //000 000 000  == 0
    wall_follow();
  }

}
