#include <LiquidCrystal_I2C.h>           // LiquidCrystal_I2C의 라이브러리를 불러옵니다.(I2C LCD)
#include<Servo.h> //Servo 라이브러리를 추가
LiquidCrystal_I2C lcd(0x27, 16, 2);      // lcd(LCD의 I2C 슬레이브 주소, lcd 1줄당 출력할 글자수, lcd 줄의 수)
Servo servo;      //Servo 클래스로 servo객체 생성

int value = 0;    // 각도를 조절할 변수 value
const int gasPin = A0;
int FAN = A1;
int laser = A2;
int sw1 = 10;
int sw2 = 11;
int r = 3;
int g = 5;
int b = 6;
void setup(){
  pinMode (laser, OUTPUT); // define the digital output interface 13 feet
  digitalWrite(laser, LOW);
  pinMode(FAN, OUTPUT);
  digitalWrite(FAN, LOW);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT); 
  servo.attach(7);     //맴버함수인 attach : 핀 설정
  lcd.init();                // LCD_I2C 통신을 시작합니다.
  lcd.backlight();           // LCD backlight를 ON
}

void loop()
{
  Serial.println(analogRead(gasPin));
  delay(500);
  
  if(digitalRead(sw1)== LOW){
    setColor(255, 255, 255); // on
  }
  if(digitalRead(sw2)== LOW){
      setColor(0, 0, 0); //off
  }
  
  lcd.clear();        //lcd 화면을 지웁니다.
  lcd.home();        //lcd 커서 위치를 0,1로 위치시킵니다.

   if(analogRead(gasPin) > 500){
     digitalWrite(FAN, LOW);
     digitalWrite (laser, LOW); // open the laser head
     lcd.print("AIR : VERY BAD!!");  
     digitalWrite(9, LOW);
     value = 45;            //각도를 30도 증가시킨다.
     servo.write(value); //value값의 각도로 회전. ex) value가 90이라면 90도 회전

  }else{
    digitalWrite(FAN, HIGH);    
    digitalWrite (laser, HIGH); // turn off the laser head
    lcd.print("AIR : NORMAL     ");
    
    digitalWrite(9, HIGH);
    value = 0;          //각도를 0으로 초기화
    servo.write(value); //value값의 각도로 회전.

    delay (1000); // delay one second
  }
}
void setColor(int red, int green, int blue)
{
  analogWrite(r, red);
  analogWrite(g, green);
  analogWrite(b, blue); 
}
