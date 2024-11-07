const int trig = 7;  
const int echo = 4;
unsigned long thoigian; 
int khoangcach;          
int khoangcachtrai, khoangcachphai;
int gioihan = 25;
void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT); 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  khoangcach = 0;
  dokhoangcach();
  Serial.println(khoangcach);
  //delay(500);
  
}
void dokhoangcach()
{

  digitalWrite(trig, LOW); 
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);  
  delayMicroseconds(10); 
  digitalWrite(trig, LOW); 


  // Đo độ rộng xung HIGH ở chân echo.
  thoigian = pulseIn(echo, HIGH);

  khoangcach = thoigian / 2 / 29.412;

}
