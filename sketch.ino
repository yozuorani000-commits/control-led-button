#define LED_MERAH 18
#define LED_BIRU 19

#define BUTTON_1 4
#define BUTTON_2 5

void setup() {
  pinMode(LED_MERAH, OUTPUT);
  pinMode(LED_BIRU, OUTPUT);

  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);

  Serial.begin(115200);
}

void loop() {
  int tombol1 = digitalRead(BUTTON_1);
  int tombol2 = digitalRead(BUTTON_2);

  if (tombol1 == LOW) {
    digitalWrite(LED_MERAH, HIGH);
  } else {
    digitalWrite(LED_MERAH, LOW);
  }

  if (tombol2 == LOW) {
    digitalWrite(LED_BIRU, HIGH);
  } else {
    digitalWrite(LED_BIRU, LOW);
  }
}
