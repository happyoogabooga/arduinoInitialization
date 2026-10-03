void setup() {
    pinMode(LED_BUILTIN, OUTPUT); //Digital pins must be specified input/output before use
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH); //send current to pin
    delay(15); //wait 15 miliseconds
    digitalWrite(LED_BUILTIN, LOW); // stop sending current to pin
    delay(15); //wait 15 miliseconds
}