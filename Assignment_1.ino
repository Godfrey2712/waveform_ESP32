// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 22;     // the number of the pushbutton pin 1 used to enable or disable the wave form
const int ledPin1 = 15;        // the number of the LED pin 1 for Signal A
const int buttonPin2 = 23;     // the number of the pushbutton pin 2 used to switch modes
const int ledPin2 = 21;        // the number of the LED pin 2 for Signal B

// variables after calculations using my surname and formulars given:
#define a 1000    //1st pulse from signal A
#define b 1300    //width of space between pulses
#define c 6       //Number of pulses in a block
#define d 5000    //space between pulse blocks
#define a1 5000   //2nd pulse from signal A
#define a2 10000  //3rd pulse from signal A
#define B 500     //Time of Signal B being in the HIGH state

// variables will change:
int buttonState = 1;         // variable for reading the pushbutton1 status

void setup() {
  // put your setup code here, to run once:
  //initialize the led pins as outputs
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  //initialize the switches as inputs
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
       buttonState = digitalRead(buttonPin1);
   if (buttonState == LOW && digitalRead(buttonPin2) == LOW) {
      digitalWrite(ledPin2, HIGH);
      delay(B);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin1, HIGH);
      delay(a);
      digitalWrite(ledPin1,LOW);
      delay(b);
      digitalWrite(ledPin1, HIGH);
      delay(a1);
      digitalWrite(ledPin1, LOW);
      delay(b);
      digitalWrite(ledPin1, HIGH);
      delay(a2);
      digitalWrite(ledPin1, LOW);
      delay(b+d);  
    }
    
   else if(buttonState == LOW && digitalRead(buttonPin2) == HIGH) {
      digitalWrite(ledPin2, HIGH);
      delay(B);
      digitalWrite(ledPin2, LOW);
      digitalWrite(ledPin1, HIGH);
      delay(a2);
      digitalWrite(ledPin1,LOW);
      delay(b);
      digitalWrite(ledPin1, HIGH);
      delay(a1);
      digitalWrite(ledPin1, LOW);
      delay(b);
      digitalWrite(ledPin1, HIGH);
      delay(a);
      digitalWrite(ledPin1, LOW);
      delay(b+d);  
    }

     else if (buttonState == HIGH && digitalRead(buttonPin2) == LOW) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
   }

   else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    }
     
      }
