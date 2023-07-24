 #include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD (0x27, 2, 1, 0, 4, 5, 6, 7); //DIR, E, RW, RS, D4, D5, D6, D7

void setup() {
  LCD.setBacklightPin(3,POSITIVE);
  LCD.setBacklight(LOW);
  LCD.begin(16, 2);
  LCD.clear();
  
 }

void loop() {

  // 1
  LCD.setCursor(0, 0);
  LCD.print("Soy seleccionado");
  LCD.setCursor(0, 1);
  LCD.print( "  Soy elegido  ");
  //LCD.scrollDisplayLeft();
  delay(2000);
 // 2
  LCD.setCursor(0, 0);
  LCD.print("Domino el Ingles");
  LCD.setCursor(0, 1);
  LCD.print("Tengo P.M.P.    ");
  delay(2000);
 //
  LCD.setCursor(0, 0);
  LCD.print("Tengo Fac. Palab");
  LCD.setCursor(0, 1);
  LCD.print("  Tengo Trato   ");
  delay(2000);
 // 3
  LCD.setCursor(0, 0);
  LCD.print("Soy tolerante a ");
  LCD.setCursor(0, 1);
  LCD.print("  la presion    ");
  delay(2000);
 // 4
  LCD.setCursor(0, 0);
  LCD.print("He implementado ");
  LCD.setCursor(0, 1);
  LCD.print(" sistemas  ERP  ");
  delay(2000);   
 //5
  LCD.setCursor(0, 0);
  LCD.print("He implementado ");
  LCD.setCursor(0, 1);
  LCD.print("metodos control ");
  delay(2000);   
// 6
  LCD.setCursor(0, 0);
  LCD.print("Soy Metodico y  ");
  LCD.setCursor(0, 1);
  LCD.print("  soy ordenado  ");
  delay(2000);   
// 6a
  LCD.setCursor(0, 0);   
  LCD.print(" Soy vendedor   ");
  LCD.setCursor(0, 1);
  LCD.print(" de proyectos   ");
  delay(2000);   
// 7
  LCD.setCursor(0, 0);   
  LCD.print(" Me buscan para ");
  LCD.setCursor(0, 1);
  LCD.print("  entrevistas   ");
  delay(2000);   
// 8
  LCD.setCursor(0, 0);   
  LCD.print("  Ven en mi un  ");
  LCD.setCursor(0, 1);
  LCD.print("Gte de sistemas ");
  delay(2000);   
// 9
  LCD.setCursor(0, 0);   
  LCD.print("Muy completo con");
  LCD.setCursor(0, 1);
  LCD.print("muchos talentos");
  delay(2000);   
// 10
  LCD.setCursor(0, 0);   
  LCD.print("Mas de tres COs.");
  LCD.setCursor(0, 1);
  LCD.print("quieren reclutar");
  delay(2000);   
// 11
  LCD.setCursor(0, 0);   
  LCD.print("Mi correo lleno ");
  LCD.setCursor(0, 1);
  LCD.print(" de propuestas  ");
  delay(2000);   
// 12
  LCD.setCursor(0, 0);   
  LCD.print("El q entrevista ");
  LCD.setCursor(0, 1);
  LCD.print("  ahora soy yo  ");
  delay(2000);   
// 13
  LCD.setCursor(0, 0);   
  LCD.print("Indago /interior");
  LCD.setCursor(0, 1);
  LCD.print("  de la empresa ");
  delay(2000);    
// 14
  LCD.setCursor(0, 0);   
  LCD.print("Valoro Presup IT");
  LCD.setCursor(0, 1);
  LCD.print("Busco potencial ");
  delay(2000);    
 // 15
  LCD.setCursor(0, 0);   
  LCD.print("Busco generar un");
  LCD.setCursor(0, 1);
  LCD.print("valor a la org. ");
  delay(2000);     
// 16
  LCD.setCursor(0, 0);   
  LCD.print("Soy IT Manager  ");
  LCD.setCursor(0, 1);
  LCD.print("de clase mundial");
  delay(2000);      
// 17
  LCD.setCursor(0, 0);   
  LCD.print("Soy Talentoso   ");
  LCD.setCursor(0, 1);
  LCD.print("Soy Competente  ");
  delay(2000);      

   
}
