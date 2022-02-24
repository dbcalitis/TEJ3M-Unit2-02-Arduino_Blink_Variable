/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.
  But the interval increases each time by 1 more second.

  Created by: Daria Bernice Calitis
  Created on: Feb 2022
*/

int blinkTime = 1000; 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(blinkTime);                  // wait for length of blinkTime
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  blinkTime += 1000                  // adds another second to the delay
}
