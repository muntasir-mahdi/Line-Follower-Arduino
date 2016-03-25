//Left Motor in Enable A pin
//Right Motor in Enable B pin


///////////////////Run The Motor with speed////////////////////////

void MotorRun(int leftMSpeed, int RightMSpeed) {    //Taking input as local variables for this function as speed
  if (leftMSpeed > 0) {                             //This speed will go to the analogWrite from ENA & ENB
    LeftMForward(leftMSpeed);     
  }
  else if (leftMSpeed < 0) {
    LeftMBackward(leftMSpeed);
  }
  else if ( leftMSpeed == 0) {
    LeftMStop();
  }

  if (RightMSpeed > 0) {
    RightMForward(RightMSpeed);
  }
  else if (RightMSpeed < 0) {
    RightMBackward(RightMSpeed);
  }
  else if ( RightMSpeed == 0) {
    RightMStop();
  }
}

/////////////////////Go Forward//////////////////////////////

void LeftMForward(int x) {    //Left Motor Forward
  analogWrite(ENA, x);
  digitalWrite(lmf, HIGH);
  digitalWrite(lmb, LOW);
}
void RightMForward(int y) {   //Right Motor Forward
  analogWrite(ENB, y);
  digitalWrite(rmf, HIGH);
  digitalWrite(rmb, LOW);
}

/////////////////////Go Backward//////////////////////////////

void goBackward(int x, int y) {              //Go Backward
  LeftMBackward(x);
  RightMBackward(y);
}
void LeftMBackward(int x) {                   //Left Motor Backward
  analogWrite(ENA, x);
  digitalWrite(lmf, LOW);
  digitalWrite(lmb, HIGH);
}
void RightMBackward(int y) {                 //Right Motor Backward
  analogWrite(ENB, y);
  digitalWrite(rmf, LOW);
  digitalWrite(rmb, HIGH);
}


////////////////////////Stop Motor///////////////////////

void stopMotor() {                          //Stop All motors
  LeftMStop();
  RightMStop();
}

void LeftMStop() {                           //Left Motor Stop
  digitalWrite(lmf, LOW);
  digitalWrite(lmb, LOW);
}

void RightMStop() {                         //Right Motor Stop
  digitalWrite(rmf, LOW);
  digitalWrite(rmb, LOW);
}


