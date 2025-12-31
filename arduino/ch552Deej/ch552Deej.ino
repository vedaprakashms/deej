#define NUM_SLIDERS 5
#define A1 11
#define A3 14
#define A2 15 // also MISO!
#define A0 32
unsigned char analogInputs[NUM_SLIDERS] = {A0,A1,A2,A3}; 
unsigned int analogSliderValues[NUM_SLIDERS];
unsigned char i;
char buf[6];



void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < NUM_SLIDERS; i++) {
    pinMode(analogInputs[i], INPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
USBSerial_print(map(analogRead(A0),0,255,0,1023));
USBSerial_print("|");
USBSerial_print(map(analogRead(A1),0,255,0,1023));
USBSerial_print("|");
USBSerial_print(map(analogRead(A2),0,255,0,1023));
USBSerial_print("|");
USBSerial_print(map(analogRead(A3),0,255,0,1023));
USBSerial_print("\n");

delay(10);

}
