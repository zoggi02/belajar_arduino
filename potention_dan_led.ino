int pinPotentiometer1 = A0; //variabel pin A0
int pinPotentiometer2 = A1; //variabel pin A1
int ledPin1 = 13;    //variabel led pin digital 13
int ledPin2 = 12;    //variabel led pin digital 13
int ledPin3 = 11;    //variabel led pin digital 13
int value1 = 0, value2 = 0;      //menentukan nilai awal
char data;          //variabel serial
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT); //membuat variabel ledPin menjadi OUTPUT
  Serial.begin(9600);
}

void loop() {
  baca();
  digitalWrite(ledPin1, HIGH); //menyalakan ledPin
  delay(value1);               //memberi waktu jeda sebanyak nilai potentiometer
  digitalWrite(ledPin1, LOW);  //mematikan ledPin
  delay(value2);               //memberi waktu jeda sebanyak nilai potentiometer
  baca();
  digitalWrite(ledPin2, HIGH); //menyalakan ledPin
  delay(value1);               //memberi waktu jeda sebanyak nilai potentiometer
  digitalWrite(ledPin2, LOW);  //mematikan ledPin
  delay(value2);               //memberi waktu jeda sebanyak nilai potentiometer
  baca();
  digitalWrite(ledPin3, HIGH); //menyalakan ledPin
  delay(value1);               //memberi waktu jeda sebanyak nilai potentiometer
  digitalWrite(ledPin3, LOW);  //mematikan ledPin
  delay(value2);               //memberi waktu jeda sebanyak nilai potentiometer
}

void baca(){
  value1 = analogRead(pinPotentiometer1); //membuat variabel value membaca nilai dari pin analog
  value2 = analogRead(pinPotentiometer2); //membuat variabel value membaca nilai dari pin analog
  Serial.println(value1);
  Serial.println(value2);

  if(value1 <= 500)
  {
    value1 = 1000;
  }
  else
  {
    value1 = 5000;
  }

  if(value2 <= 500)
  {
    value2 = 1000;
  }
  else
  {
    value2 = 5000;
  }
  
}
