void followLine() {
  stayOnline();                 /////////////Staying Online//////////////
  
                /////////////////Avoid Gap///////////////
if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1 && s6 == 1 && s7==1 && s8==1 && s9==1){
  stopMotor();
  delay(300);
  MotorRun(-200,-145);
  delay(200);
  MotorRun(200, 140);
  delay(1000);
}
}
/*  /////////////////////////turn 90 Left//////////////////////////////////////

  if ((s1 == 0 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1) || (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 1 && s5 == 1 && s6 == 1))
    //first 2 ta/3ta shada right 4ta/ 3ta kalo
  {
    MotorRun(-200, -140);
    delay(300);
    turn90Left();
  }
  else if (s3 == 0 && s4 == 0) {
    followLine();
  }


  ////////////////////////////////// Turn 90 Right ////////////////////////////////////////////

  if ((s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 0) || (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0 && s5 == 0 && s6 == 0)) //left 2ta kalo baki shob shada/ left 3ta kalo bakishobshada = turn90right
  {
    MotorRun(-255, -140);
    delay(300);
    turn90Right();
  }
  else if (s3 == 0 && s4 == 0) {
    followLine();
  }

  if (( s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 0 && s6 == 1) || ( s1 == 1 && s2 == 0 && s3 == 0 && s4 == 0 && s5 == 1 && s6 == 1)) { /////Very Sharp Turn
    MotorRun(-255, -140);
    delay(100);
    turn90Right();
  }
}

*/
