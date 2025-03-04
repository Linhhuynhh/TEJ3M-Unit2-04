/* C code
 Created by: Linh Huynh
 Created on: Mar 2025
*/
 
int blink_time = 1000; //set variable to 1000
const int PIN_11 = 11;
const int PIN_12 = 12;
const int PIN_13 = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13,LOW);
  delay(1000); // wait for 1000 millisecond (s)
  
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13,LOW);
  delay(1000); // wait for 1000 millisecond (s)
  
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13,HIGH);
  delay(1000); // wait for 1000 millisecond (s)
  
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13,LOW);
  delay(1000); // wait for 1000 millisecond (s)
  
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13,HIGH);
  delay(1000); // wait for 1000 millisecond (s)
  
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13,HIGH);
  delay(1000); // wait for 1000 millisecond (s)
  
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13,HIGH);
  delay(1000); // wait for 1000 millisecond (s)

}
 
