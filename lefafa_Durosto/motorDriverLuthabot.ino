//analogWrite(ENA, 200);    //To go Straight
//analogWrite(ENB, 140);


void MotorRun(int leftMSpeed, int RightMSpeed) {    //Taking input as local variables for this function as speed
  if (leftMSpeed > 0) {                              //This speed will go to the analogWrite from
    LeftMForward(leftMSpeed);                           // ENA and ENB
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

void LeftMBackward(int x) {
  analogWrite(ENA, x);
  digitalWrite(lmf, LOW);
  digitalWrite(lmb, HIGH);

}

void RightMBackward(int y) {
  analogWrite(ENB, y);
  digitalWrite(rmf, LOW);
  digitalWrite(rmb, HIGH);
}
void goBackward(int x, int y) {
  LeftMBackward(x);
  RightMBackward(y);
}

void LeftMStop() {
  digitalWrite(lmf, LOW);
  digitalWrite(lmb, LOW);

}
void RightMStop() {
  digitalWrite(rmf, LOW);
  digitalWrite(rmb, LOW);

}
void stopMotor() {
  LeftMStop();
  RightMStop();
}

