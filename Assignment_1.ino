// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 22;     // the number of the pushbutton pin 1 used to enable or disable the wave form
const int ledPin1 = 15;        // the number of the LED pin 1 for Signal A
const int buttonPin2 = 23;     // the number of the pushbutton pin 2 used to switch modes
const int ledPin2 = 21;        // the number of the LED pin 2 for Signal B

// variables after calculations using my surname and formulars given:
#define a 900    //1st pulse from signal A
#define b 1300   //width of space between pulses
#define c 6      //Number of pulses in a block
#define d 500    //space between pulse blocks
#define a1 950   //2nd pulse from signal A
#define a2 1000  //3rd pulse from signal A
#define a3 1050  //4th pulse from signal A
#define a4 1100  //5th pulse from signal A
#define a5 1150  //6th pulse from signal A
#define B 50    //Time of Signal B being in the HIGH state

// variables will change:
int buttonState = 1;         // variable for reading the pushbutton1 status

void setup() {
  //initializing the led pins as outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  //initializing the switches as inputs
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
       buttonState = digitalRead(buttonPin1);
       //Operating in Normal State
   if (buttonState == LOW && digitalRead(buttonPin2) == LOW) {
      digitalWrite(ledPin2, HIGH);
      delayMicroseconds(B);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a);
      digitalWrite(ledPin1,LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a1);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a2);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a3);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a4);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a5);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b+d);  
    }
    
    //Operating in MODE State
   else if(buttonState == LOW && digitalRead(buttonPin2) == HIGH) {
      digitalWrite(ledPin2, HIGH);
      delayMicroseconds(B);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a5);
      digitalWrite(ledPin1,LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a4);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a3);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a2);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a1);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b);
      digitalWrite(ledPin1, HIGH);
      delayMicroseconds(a);
      digitalWrite(ledPin1, LOW);
      delayMicroseconds(b+d);
    }
    
   //Turning off the circuit/signal flow
   else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    }
     
      }
