void wall_follow()
{
  //delay(50);                      // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  // Serial.print("Ping: ");
  
  int a = uS / US_ROUNDTRIP_CM;
  // Serial.print(a); // Convert ping time to distance in cm and print result (0 = outside set distance range)

  // Serial.println("cm");
  if (a >= 4 && a <= 5)
    MotorRun(200, 180);
    
  if (a < 4 && a > 0)
    MotorRun(200, 140);
  
  if (a > 5 && a < 10)
    MotorRun(140, 200);

}
