#define A0 14
#define B0 16
#define A1 20
#define B1 21

void setup() {
Serial.begin(9600);
pinMode(14, OUTPUT); //A0
pinMode(16, OUTPUT); //B0
pinMode(20, OUTPUT); //A1
pinMode(21, OUTPUT); //B1
pinMode(12, INPUT); //SUM0
pinMode(8, INPUT); //SUM1
pinMode(5, INPUT); //CARRY2

}

void loop() {
//Case1: all inputs are low, the expected output is 0. 0 + 0 = 0!
digitalWrite(A0, LOW);
digitalWrite(B0, LOW);
digitalWrite(A1, LOW);
digitalWrite(B1, LOW);
int sum0 = digitalRead(12);
int sum1 = digitalRead(8);
int carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case2: all inputs but b0 are low, the expected output is for sum1 = 1;
digitalWrite(A0, LOW);
digitalWrite(B0, HIGH);
digitalWrite(A1, LOW);
digitalWrite(B1, LOW);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case3: all inputs but b1 are low, the expected output is for sum1 = 1;
digitalWrite(A0, LOW);
digitalWrite(B0, LOW);
digitalWrite(A1, LOW);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case4: both b0 and b1 are high, while a0 and a1 are low, the expected output is for sum0 = 1 & sum1 = 1;
digitalWrite(A0, LOW);
digitalWrite(B0, HIGH);
digitalWrite(A1, LOW);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);


//Case5: all inputs but a0 are low, the expected output is for sum0 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, LOW);
digitalWrite(A1, LOW);
digitalWrite(B1, LOW);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case6: both a0 and b0 are high, while a1 and b1 are low , the expected output is for sum1 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, HIGH);
digitalWrite(A1, LOW);
digitalWrite(B1, LOW);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case7: both a0 and b1 are high, while a1 and b0 are low , the expected output is for sum1 = 1 & sum0 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, LOW);
digitalWrite(A1, LOW);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case8: all inputs but a1 are high, the expected output is for carry2 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, HIGH);
digitalWrite(A1, LOW);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case9: all inputs but a1 are low, the expected output is for sum1 = 1;
digitalWrite(A0, LOW);
digitalWrite(B0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(B1, LOW);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case10: both a1 and b0 are high, while a0 and b1 are low , the expected output is for sum1 = 1 & sum0 = 1;
digitalWrite(A0, LOW);
digitalWrite(B0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(B1, LOW);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case11: both a1 and b1 are high, while a0 and b0 are low , the expected output is for carry2 = 1;
digitalWrite(A0, LOW);
digitalWrite(B0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case12: all inputs excepted for a0 are high, the expected output is for sum0 = 1 & carry2 = 1;
digitalWrite(A0, LOW);
digitalWrite(B0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case13: both a0 and a1 are high, while b0 and b1 are low , the expected output is for sum1 = 1 & sum0 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(B1, LOW);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case14: all inputs except or b1 are high, the expected output is for carry2 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(B1, LOW);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case15: all inputs except or b0 are high, the expected output is for sum0 = 1 & carry2 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

delay(2000);

//Case16: all inputs are high, the expected output is for sum1 = 1 & carry2 = 1;
digitalWrite(A0, HIGH);
digitalWrite(B0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(B1, HIGH);
sum0 = digitalRead(12);
sum1 = digitalRead(8);
carry2 = digitalRead(5);

binarytodecimal(carry2, sum1, sum0);

Serial.print("TEST CASES COMPLETE!!! \n \n \n");

delay(2000);
}

//function that converts the binary value into decimal
void binarytodecimal(int c, int s1, int s0){

  if (s0 == LOW && s1 == LOW && c == LOW){
    Serial.print("000 = 0");
    Serial.print("\n");
  }
  if (s0 == HIGH && s1 == LOW && c == LOW){
    Serial.print("001 = 1");
    Serial.print("\n");
  }
  if (s0 == LOW && s1 == HIGH && c == LOW){
    Serial.print("010 = 2");
    Serial.print("\n");
  }
  if (s0 == HIGH && s1 == HIGH && c == LOW){
    Serial.print("011 = 3");
    Serial.print("\n");
  }
  if (s0 == LOW && s1 == LOW && c == HIGH){
    Serial.print("100 = 4");
    Serial.print("\n");
  }
  if (s0 == HIGH && s1 == LOW && c == HIGH){
    Serial.print("101 = 5");
    Serial.print("\n");
  }
  if (s0 == LOW && s1 == HIGH && c == HIGH){
    Serial.print("110 = 6");
    Serial.print("\n");
  }
}
