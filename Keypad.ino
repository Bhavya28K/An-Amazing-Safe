//libraries
#include <LiquidCrystal.h>

//variables
LiquidCrystal lcd(3, 5, 6, 9, 10, 11);
int button1Pin = 7;
int button2Pin = 8;
int button3Pin = 9;
int onePressed;
int twoPressed;
int threePressed;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);
  lcd.print ("Type the password");
  if(digitalRead(button1Pin) == LOW){
    lcd.clear();
    delay(500);
    lcd.setCursor(0,0);
    lcd.print ("1");
    onePressed++;
  }
  if(digitalRead(button2Pin) == LOW){
    lcd.clear();
    delay(500);
    lcd.setCursor(0,0);
    lcd.print ("2");
    twoPressed++;
  }
  if (digitalRead(button3Pin) == LOW){
    lcd.clear();
    delay(500);
    lcd.setCursor(0,0);
    lcd.print("3");
    threePressed++;
  }
  if(onePressed == 1 && twoPressed == 3 && threePressed == 2){
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Welcome");
    lcd.setCursor(0,1);
    lcd.print("back");
  }
  delay(100);
}
