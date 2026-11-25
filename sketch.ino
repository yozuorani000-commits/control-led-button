#define LED_1 18
#define LED_2 19
#define LED_3 21
#define BUTTON_1 4
#define BUTTON_2 5
#define BUTTON_3 15

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  int tombol1 = digitalRead(BUTTON_1);
  int tombol2 = digitalRead(BUTTON_2);
  int tombol3 = digitalRead(BUTTON_3);

  if (tombol1 == LOW) {
    digitalWrite(LED_1, HIGH);
  } else {
    digitalWrite(LED_1, LOW);
  }

  if (tombol2 == LOW) {
    digitalWrite(LED_2, HIGH);
  } else {
    digitalWrite(LED_2, LOW);
  }

  if (tombol3 == LOW) {
    digitalWrite(LED_3, HIGH);
  } else {
    digitalWrite(LED_3, LOW);
  }
}
