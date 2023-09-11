#define LED_PIN 11
#define POTENTIOMETER_PIN A1

void setup(){


  pinMode(LED_PIN, OUTPUT);


}
void loop(){
  int /*your variable here*/ = /*reading the potientmeter*/
  int brightness = /*your variable here */ / 4;
  /*Function here for writing the LED in PWM*/ (LED_PIN, brightness);
}