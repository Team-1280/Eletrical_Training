const int Button1 = 10; 
const int Button2 = 11;
const int Button3 = 12;
const int Led1 = 1;
const int Led2 = 2;
const int Led3 = 3;
const boolean tf = true;

void setup(){
    pinMode(Button1, INPUT); //this is setting up the pins to be Input or Output, in this case buttons are Inputs 
    pinMode(Button2, INPUT);
    pinMode(Button3, INPUT); 
    pinMode(Led1, OUTPUT); //and LEDs are Outputs 
    pinMode(Led2, OUTPUT);
    pinMode(Led3, OUTPUT);
}
void loop(){
    while(tf == true){
        digitalWrite(Led1, HIGH);
        delay(5);
        digitalWrite(Led1, LOW);
        digitalWrite(Led2, HIGH);
        delay(5);
        digitalWrite(Led2, LOW);
        digitalWrite(Led3, HIGH);
        delay(5);
        digitalWrite(Led3, LOW);
    }
}