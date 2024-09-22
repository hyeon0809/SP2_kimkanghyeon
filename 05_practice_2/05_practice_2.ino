#define PIN_LED 7
unsigned int toggle;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0;i < 11;i++){
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(100);
  }
   while(1){}
  
}
int toggle_state(int toggle) {
    return !toggle;
}
