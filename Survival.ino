int braudRate = 9600;
int Action1 = 8;
int Action2 = 7;
int Action3 = 6;
int Action4 = 5;
int Action5 = 4;
int indicatorLED = 13;
bool State1 = false;
bool State2 = false;
bool State3 = false;
bool State4 = false;
bool State5 = false;

//These variables are the pins that trigger relays which then triggers hidden abilities :D




void setup() {

Serial.begin(braudRate);

//pins
pinMode(Action1, OUTPUT);
pinMode(Action2, OUTPUT);
pinMode(Action3, OUTPUT);
pinMode(Action4, OUTPUT);
pinMode(Action5, OUTPUT);

pinMode(indicatorLED, OUTPUT);
//pins
}

void loop() {

if (Serial.available()) {
  String commandInput_technicallyASpell = Serial.readStringUntil('\n');
  commandInput_technicallyASpell.trim();


  if (commandInput_technicallyASpell == "R") {
    if (State1 == false) {
      State1 = true;
      digitalWrite(Action1, HIGH);

    }
    else if(State1 == true) {
      State1 = false;
      digitalWrite(Action1, LOW);
    }
  
  }


  if (commandInput_technicallyASpell == "T") {
    if (State2 == false) {
      State2 = true;
      digitalWrite(Action2, HIGH);

    }
    else if(State2 == true) {
      State2 = false;
      digitalWrite(Action2, LOW);
    }
  }

  if (commandInput_technicallyASpell == "Y") {
    if (State3 == false) {
      State3 = true;
      digitalWrite(Action3, HIGH);

    }
    else if(State3 == true) {
      State3 = false;
      digitalWrite(Action3, LOW);
    }
  }

  if (commandInput_technicallyASpell == "U") {
    if (State4 == false) {
      State4 = true;
      digitalWrite(Action4, HIGH);

    }
    else if(State4 == true) {
      State4 = false;
      digitalWrite(Action4, LOW);
    }
  }

  if (commandInput_technicallyASpell == "I") {
    if (State5 == false) {
      State5 = true;
      digitalWrite(Action5, HIGH);

    }
    else if(State5 == true) {
      State5 = false;
      digitalWrite(Action5, LOW);
    }
  }

}

}  
      