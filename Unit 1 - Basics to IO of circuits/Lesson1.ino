//defining the pins that is connecting to the boards
const int Button1 = 10; 
const int Button2 = 11;
const int Button3 = 12;
const int Led1 = 1;
const int Led2 = 2;
const int Led3 = 3;

//Setup for Toggle of the Buttons
int ledState = LOW;     // the current state of LED
int lastButtonState;    // the previous state of button
int currentButtonState; // the current state of button

void setup() {
  //telling the mainboard what kind of pins of Input or Output
  pinMode(Button1, INPUT_PULLUP); //Input_Pullup for a LATCH switch
  pinMode(Button2, INPUT);//Input for And Switch
  pinMode(Button3, INPUT); //Input for the ON/OFF switch
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  
  currentButtonState = digitalRead(Led3);//setup for Toggle Switch
}

void loop() {   
  lastButtonState    = currentButtonState;      // save the last state
  currentButtonState = digitalRead(Led3); // read new state



  //This is the Setup for the basic "HIGH and LOW" lights
  while(digitalRead(Button3) == HIGH){ 
    digitalWrite(Led1, HIGH);//Turns LED on if the button is pressed
  }


  // This is a Setup for the Basic "And" switch
  if(digitalRead(Button3) == HIGH && digitalRead(Button2) == HIGH){
    digitalWrite(Led2, HIGH);
  }
  else{
    digitalWrite(Led2, LOW);
  }


  //This is the Setup for the Basic "Latch" Switch
  if(lastButtonState == HIGH && currentButtonState == LOW) {
    // toggle state of LED
    ledState = !ledState;

    // control LED arccoding to the toggled state
    digitalWrite(Led3, ledState); 
  }
}
