void Online() {
  //Line Color == 0 ;

  //condition 1: if middle sensors are online, go forward;

  if ( b == "111000111") {                  // 111 000 111 == 455
    MotorRun(200, 180);
  }

  //condition 2: if one of the Left middle sensors is in black, get back to line by going right

  else if (b == "111100111") {             // 111 100 111 == 487
    MotorRun(200, -180);
  }

  //condition 3: if one of the Right middle sensors is in black, get back to line by going Left

  else if (b == "111001111") {            // 111 001 111 == 463
    MotorRun(-200, 180);
  }

  //condition 4: if All of the Right Sensors are in White, Turn 90 Degree Right

  else if ( b == "111100000") {          //1111 00000 == 480
    MotorRun(200, -180);
  }
  //condition 5: if All of the Left Sensors are in White, Turn 90 Degree Left

  else if ( b == "000001111") {          //00000 1111 == 15
    MotorRun(-200, 180);
  }

  //condition 6: if All of the Sensors are in Black, Follow Wall.
  else if (b == "111111111") {         //111 111 111 == 511
    wall_follow();
  }

  //condition 7: if All of the Sensors are in White, Go Ahead.
  else if (b == "000000000") {           //000 000 000  == 0
    MotorRun(200, 180);
  }

  //condition 8: if middle sensors ars is invert color, rest of them are in line color.
  else if (b == "000111000") {           //000 111 000  ==
    MotorRun(0, 0);
  }
}

