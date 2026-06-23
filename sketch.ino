#define PIR_PIN 27
#define LED_PIN 13

bool roomOccupied = false;
unsigned long lastMotionTime = 0;
const unsigned long vacancyTimeout = 5000; // 5 seconds
void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("Smart Room Occupancy System Started");
}

void loop() {
  int pirState = digitalRead(PIR_PIN);
  if (pirState == HIGH) {// Motion detected
    lastMotionTime = millis();
    if (!roomOccupied) {
      roomOccupied = true;
      digitalWrite(LED_PIN, HIGH);
      Serial.println("Room Occupied");
    }
  }
  if (roomOccupied &&
      millis() - lastMotionTime > vacancyTimeout) {
    roomOccupied = false;
    digitalWrite(LED_PIN, LOW);// Check vacancy timeout
    Serial.println("Room Vacant");
  }

  delay(100);
}
