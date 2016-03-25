int lcr, lnr, rcr, rnr, lfr, rfr;
int ENA = 9; int ENB = 10;
int lfs = 0; int lns = 1; int lcs = 2; int rcs = 3; int rns = 4; int rfs = 5;

int lmf = 45; int lmb = 44; int rmb = 36; int rmf = 37;
void setup() {

  pinMode(lns, INPUT);
  pinMode(lcs, INPUT);
  pinMode(rns, INPUT);
  pinMode(rcs, INPUT);
  pinMode(lfs, INPUT);
  pinMode(rfs, INPUT);

  pinMode(lmf, OUTPUT);
  pinMode(lmb, OUTPUT);
  pinMode(rmf, OUTPUT);
  pinMode(rmb, OUTPUT);
}

void loop() {
  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

  digitalWrite(lmf, HIGH);
  digitalWrite(lmb, LOW);
  digitalWrite(rmf, HIGH);
  digitalWrite(rmb, LOW);
}
