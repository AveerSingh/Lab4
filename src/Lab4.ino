SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

// setup() runs once, when the device is first turned on.
void setup() {
pinMode(D7, INPUT);
bool value = digitalRead(D7);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  bool x = digitalRead(D7);
  if (x == true) 
{
  analogWrite(D5, 255);
}
 else
 {
  analogWrite(D5, 0);
}
}

