const int PANEL_LOAD = 5;
const int PANEL_CLK = 6;
const int PANEL_DIN = 7;
const int PANEL_QNT = 1;

const int BUTTON_TOP_1_LED = 10;
const int BUTTON_TOP_2_LED = 11;
const int BUTTON_TOP_1_BUTTON = 12;
const int BUTTON_TOP_2_BUTTON = 13;

const int LEFTLED = 0;
const int RIGHTLED = 1;

const int BUTTON_FRONT = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEFTLED, OUTPUT);
  pinMode(RIGHTLED, OUTPUT);

  pinMode(BUTTON_FRONT, INPUT);

  // put your main code here, to run repeatedly:
  digitalWrite(LEFTLED, LOW);
  digitalWrite(RIGHTLED, LOW);
}

void loop() {

}
