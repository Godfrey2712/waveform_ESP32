// constants won't change. They're used here to set pin numbers:
const int buttonPin1 = 22;     // the number of the pushbutton pin 1
const int ledPin1 = 15;      // the number of the LED pin 1
const int buttonPin2 = 23;     // the number of the pushbutton pin 2
const int ledPin2 = 21;      // the number of the LED pin 2
#define a 1200
#define b 1500
#define c 6
#define d 5000
#define a1 5000
#define a2 10000
#define B 500 //Signal of B

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton1 status
//int buttonState2 = 0;         // variable for reading the pushbutton2 status

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
   if (digitalRead(buttonPin1) == LOW && digitalRead(buttonPin2) == LOW) {
    {
      //digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, HIGH);
      delay(B);
      //digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
      //delay(50);
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

   if (digitalRead(buttonPin1) == LOW && digitalRead(buttonPin2) == HIGH) {
    {
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
  }   
  }
else if(digitalRead(buttonPin1) == HIGH && digitalRead(buttonPin2) == LOW); {
    {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
    }
    }
      }
  
