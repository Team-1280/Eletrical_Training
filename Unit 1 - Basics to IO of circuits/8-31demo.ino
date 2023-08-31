int builtin = 13



void setup() {
    pinMode(builtin, OUTPUT);
}
void loop() {
    DigitalWrite(builtin, HIGH);
    delay(10);
    DigitalWrite(builtin, LOW);
}