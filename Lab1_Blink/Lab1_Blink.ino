/* Programmer: Andrew Gowan
 *  Date: 11.14.19 
 *  Program: DigitalRead() & The Serial Port 
 *  
 * This program reads a digital input on pin2 prints the results to the serial monitor
 */

//digital pin2 has a push button attached to it
// Using the Function pinMode to call the variable led and provide Output 
int pushButton = 2;
void setup() {
  //initializes serial communication at 9600 bits per second 
  Serial.begin(9600);
  //make the pushBotton pin an input
  pinMode(pushButton, INPUT);
     
}

void loop() {
  // read the input pin 
  int buttonState = digitalRead(pushButton);
  // print out the state of the button
  Serial.println(buttonState);
  delay(250); // delay in between readings for stability 
}
