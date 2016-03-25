void readSensors() {

  //int a = 550;                   ////Threshold initializing

  s1 = analogRead(sensor1);
  if ( s1 < 511 )  s1 = 0;
  else s1 = 1;

  s2 = analogRead(sensor2);
  if ( s2 < 507)  s2 = 0;
  else s2 = 1;

  s3 = analogRead(sensor3);
  if ( s3 <510 )  s3 = 0;
  else s3 = 1;

  s4 = analogRead(sensor4);
  if ( s4 < 508)  s4 = 0;
  else s4 = 1;

  s5 = analogRead(sensor5);
  if ( s5 < 508)  s5 = 0;
  else s5 = 1;

  s6 = analogRead(sensor6);
  if ( s6 < 508)  s6 = 0;
  else s6 = 1;

  s7 = analogRead(sensor7);
  if ( s7 < 514)  s7 = 0;
  else s7 = 1;


  s8 = analogRead(sensor8);
  if ( s8 < 506)  s8 = 0;
  else s8 = 1;


  s9 = analogRead(sensor9);
  if ( s9 < 509)  s9 = 0;
  else s9 = 1;

}
