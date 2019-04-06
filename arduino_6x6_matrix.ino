
unsigned long time;
unsigned long next_time;
unsigned long swap_time = 2000;
int state;
int microdelay = 2;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (13, OUTPUT);
  time = 0;
  next_time = 0;
  state = 0;
}

void clearMatrix() {
  for (int i=2; i<=7; i++) {
    for (int j=8; i<=13; i++) {
       digitalWrite(i, LOW);
       digitalWrite(j, LOW);
    }
  }
}


// the loop function runs over and over again forever
void loop() {

  time = millis();
  if ((time-next_time) > swap_time) {
    state++;
    if (state > 7) state = 0;
    next_time = time;
  }

  switch(state) {
    case 0: drawN(); break;
    case 1: drawT(); break;
    case 2: drawP(); break;
    case 3: drawE(); break;
    //case 4: drawF(); break;
    //case 5: drawC(); break;
    //case 6: drawT(); break;
    default: drawSwipe(); break;
  }

}

void drawSwipe() {
  int test = (millis()/60)%12;
  if (test > 6) test = 11 - test;
  digitalWrite(test+8, HIGH);
  delay(microdelay);
  clearMatrix();
}

void drawC() {
  digitalWrite(8, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(9, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(microdelay);
  clearMatrix();

  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
}

void drawE() {
  digitalWrite(8, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(9, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(microdelay);
  clearMatrix();

  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(13, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(microdelay);
  clearMatrix();
}

void drawF() {
  digitalWrite(8, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(9, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();

  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(13, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
}

void drawN() {
  digitalWrite(8, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(9, HIGH);
  digitalWrite(2, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(10, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(11, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();

  digitalWrite(12, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(13, HIGH);
  delay(microdelay);
  clearMatrix();
}

void drawP() {
  digitalWrite(8, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(9, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(10, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();

  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(13, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
}

void drawT() {
  digitalWrite(8, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(9, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(10, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(11, HIGH);
  delay(microdelay);
  clearMatrix();

  digitalWrite(12, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
  
  digitalWrite(13, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(microdelay);
  clearMatrix();
}
