byte pins[8] = {2, 3, 4, 5, 6, 7, 8, 9};
byte show[16][8] = {
  {0, 0, 0, 0, 0, 0, 1, 1},
  {0, 0, 0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 1, 1},
  {0, 0, 1, 1, 1, 1, 0, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 1, 1, 1, 1, 1, 1, 1},
  {0, 0, 0, 0, 0, 0, 1, 1},
  {0, 0, 0, 0, 1, 1, 0, 0},
  {0, 0, 1, 1, 0, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 0, 0},
  {1, 1, 0, 0, 0, 0, 1, 1},
  {0, 0, 1, 1, 1, 1, 0, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 1, 1, 1, 1, 1, 1, 1},
}; 

void setup() {
  // put your setup code here, to run once:
  for(byte i = 0; i < 8; ++i){
    pinMode(pins[i], OUTPUT);  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte i= 0; i < sizeof(show)/sizeof(show[0]); i++){
    for(byte j = 0; j < sizeof(pins); j++){
      digitalWrite(pins[j], show[i][j]);
    }
    delay(1000);
  }
}
