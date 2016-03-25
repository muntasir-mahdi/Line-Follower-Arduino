void readSensors() {

  s1 = analogRead(sensor1);
  if ( s1 < 299)  s1 = 0;
  else s1 = 1;

  s2 = analogRead(sensor2);
  if ( s2 < 324)  s2 = 0;
  else s2 = 1;

  s3 = analogRead(sensor3);
  if ( s3 < 325)  s3 = 0;
  else s3 = 1;

  s4 = analogRead(sensor4);
  if ( s4 < 419)  s4 = 0;
  else s4 = 1;

  s5 = analogRead(sensor5);
  if ( s5 < 383)  s5 = 0;
  else s5 = 1;

  s6 = analogRead(sensor6);
  if ( s6 < 600)  s6 = 0;
  else s6 = 1;

}
