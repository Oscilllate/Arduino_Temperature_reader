#include <LiquidCrystal.h>

// Define LCD pin connections: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int sensorPin = A0;
void setup() {
  Serial.begin(9600);
  
  // Initialize the LCD with 16 columns and 2 rows
  lcd.begin(16, 2);

  // Print the start up messages
  lcd.setCursor(5, 0);
  lcd.print("Weather");
  lcd.setCursor(7, 1);

  // Insert the degrees symbol
  lcd.print((char)223);

  lcd.print("C");
  lcd.setCursor(0, 0);
  delay(1000);
  lcd.clear();
  lcd.print("Accurate feels");
  lcd.setCursor(0, 1);
  lcd.print("like temperature");
  delay(1400);
  // Clear the display for Temperature reading
  lcd.clear();

}

void loop() {
  // Read the temperature sensor
  int sensorVal = analogRead(sensorPin);

  // Get the sensor value
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);

  // Calculate the voltage
  float voltage = (sensorVal/1024.0) * 5.0;
  Serial.print(", Volts: ");
  Serial.print(voltage);

  Serial.print(", degrees C: ");
  // Calculate the Celcius degrees
  float celcius = (voltage - .5) * 100;
  Serial.print(celcius);
  
    // Set the line to the first line
    lcd.setCursor(0, 0);

    // Print "Temperature"
    lcd.print("Temperature");

    // Move to the second line
    lcd.setCursor(0, 1);

    // Print the celcius temperature
    lcd.print(celcius);

    //Print the degrees symbol
    lcd.print((char)223);
    lcd.print("C");
    // Delay and repeat to update the temperature
    delay(1000);
    lcd.clear();
  
 
}