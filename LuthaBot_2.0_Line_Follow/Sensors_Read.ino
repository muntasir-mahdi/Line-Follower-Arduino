void readSensors()
{
  for (int i = 0; i < 9; i++)      //iterating for 9 times for 9 sensors
  {
    sensor[i] =  analogRead(pin[i]);    // Assigning the value from nth PIN to nth element of Sensor array
    if (sensor[i] > threshold)          // If the value of nth element of Sensor array is Greater than threshold, It's in Black or else It's in white;
      sensor[i] = 0;                    // 0 for line
    else
      sensor[i] = 1;                    // 1 for outside of the line
  }

  for (int k = 0; k < 9; k++)           // Iterating for 9 times
  {
    b += String(sensor[k], BIN);        // b + [Binary of nth element of sensor in string] is assigned for b.
  }

//  delay(100);
//  Serial.print(b);
//  Serial.print("  ");
//  Serial.print(" \n");
}

