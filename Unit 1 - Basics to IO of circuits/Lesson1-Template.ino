//This is a setup of the buttons and lights in wired in the Arduino 
const int Button1 = 10; 
const int Button2 = 11;
const int Button3 = 12;
const int Led1 = 1;
const int Led2 = 2;
const int Led3 = 3;

void setup() {
    //this part of the code runs only once and runs the first hence the ename "setup"
    pinMode(Button1, INPUT); //this is setting up the pins to be Input or Output, in this case buttons are Inputs 
    pinMode(Button2, INPUT);
    pinMode(Button3, INPUT); 
    pinMode(Led1, OUTPUT); //and LEDs are Outputs 
    pinMode(Led2, OUTPUT);
    pinMode(Led3, OUTPUT);
}
void loop(){
    //this part of the code is runs repeately and does it forever hence "loop"
    
}