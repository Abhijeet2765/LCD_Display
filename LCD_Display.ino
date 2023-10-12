#include<LiquidCrystal.h>
LiquidCrystal lcd(6,7,8,9,10,11);
//RS -6;EN-7;R/W-ground,D4-8,D5-9,D6-10,D7-11
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);

}

void loop() {
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.print("Welcome to");
  lcd.setCursor(4,1);
  lcd.print("Group 14");
  delay(2000);
  for(int i=15;i>=0;i--){
    lcd.clear();
    lcd.setCursor(i,0);
    if(i==15){
      lcd.print("A");
      delay(500);
    }
    if(i==14){
      lcd.print("Ab");
      delay(500);
    }
    if(i==13){
      lcd.print("Abh");
      delay(500);
    }
    if(i==12){
      lcd.print("Abhi");
      delay(500);
    }
    if(i==11){
      lcd.print("Abhij");
      delay(500);
    }
    if(i==10){
      lcd.print("Abhije");
      delay(500);
    }
    if(i==9){
      lcd.print("Abhijee");
      delay(500);
    }
    if(i==8){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==7){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==6){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==5){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==4){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==3){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==2){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==1){
      lcd.print("Abhijeet");
      delay(500);
    }
    if(i==0){
      lcd.print("Abhijeet");
      delay(500);
    }
  }
}


