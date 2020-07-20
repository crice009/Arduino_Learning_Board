/*
  Button

  Turns on and off a light emitting diode(LED)s connected to digital pins 9 and 10,
  when pressing a pushbutton attached to pin 2 or 3.

  The circuit:
  - LED attached from pin 9 to ground and 10 to ground
  - pushbutton attached to pin 2 from +5V and pin 3 to +5V
  - 10K resistor attached to pin 2 from ground and 10K resistor attached to pin 3 from ground

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe
  modified july 2020
  by Corey Rice

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 2;     // the number of the pushbutton pin
const int ledPin1 =  9;      // the number of the LED pin
const int buttonPin2 = 3;     // the number of the pushbutton pin
const int ledPin2 =  10;      // the number of the LED pin

// variables will change:
int buttonState1= 0;         // variable for reading the pushbutton status
int buttonState2= 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin1, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
  }

    // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState2 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin2, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin2, LOW);
  }
}
