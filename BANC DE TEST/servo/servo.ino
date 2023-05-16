#include<Servo.h> // include server library

Servo ser; // create servo object to control a servo
int posServo = 0;
int val;
int pos2 = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ser.attach(9); 
  ser.write(0);
  delay(300); 
}

void loop() {
while (Serial.available()){
    val = Serial.parseInt();
    Serial.println(val);
    servo(val);  
    //servo2(val);
  }
}

void servo (int a){
  if (a == 1){
    for (posServo = 0; posServo <= 90 ; posServo++) {                             // in steps of 1 degree
      ser.write(posServo);              // tell servo to go to position in variable 'pos'
      delay(500);                       // waits 15ms for the servo to reach the position
    }
  }

  else if (a == 2){  
    for (posServo = 90; posServo >= 0 ; posServo--) {                             // in steps of 1 degree
      ser.write(posServo);              // tell servo to go to position in variable 'pos'
      delay(500);                       // waits 15ms for the servo to reach the position
    }
  }
}

void servo2 (int a){
  if (a == 5){
      pos2 = pos2 + 1;
    }
  else if (a == 6){
      pos2 = pos2 - 1;
    }
  ser.write(pos2);
  Serial.println(pos2);
}