#define pinLED1 13
#define pinLED2 11
#define pinLED3 10
#define pinLED4 12
#define pinLED5 9

void setup() {

 pinMode(pinLED1, OUTPUT);  
 pinMode(pinLED2, OUTPUT);  
 pinMode(pinLED3, OUTPUT); 
 pinMode(pinLED4, OUTPUT);  
 pinMode(pinLED5, OUTPUT);

}

void loop() {
  
 digitalWrite(pinLED1, HIGH);  
 digitalWrite(pinLED2, HIGH);  
 digitalWrite(pinLED3, HIGH); 
 digitalWrite(pinLED4, HIGH);  
 digitalWrite(pinLED5, HIGH);
 delay(2000);
 digitalWrite(pinLED1, LOW);  
 digitalWrite(pinLED2, HIGH);  
 digitalWrite(pinLED3, HIGH); 
 digitalWrite(pinLED4, HIGH);  
 digitalWrite(pinLED5, HIGH);
 delay(2000);
 digitalWrite(pinLED1, HIGH);  
 digitalWrite(pinLED2, LOW);  
 digitalWrite(pinLED3, HIGH); 
 digitalWrite(pinLED4, HIGH);  
 digitalWrite(pinLED5, HIGH);
 delay(2000);
 digitalWrite(pinLED1, HIGH);  
 digitalWrite(pinLED2, HIGH);  
 digitalWrite(pinLED3, LOW); 
 digitalWrite(pinLED4, HIGH);  
 digitalWrite(pinLED5, HIGH);
 delay(2000);
 digitalWrite(pinLED1, HIGH);  
 digitalWrite(pinLED2, HIGH);  
 digitalWrite(pinLED3, HIGH); 
 digitalWrite(pinLED4, LOW);  
 digitalWrite(pinLED5, HIGH);
 delay(2000);
 digitalWrite(pinLED1, HIGH);  
 digitalWrite(pinLED2, HIGH);  
 digitalWrite(pinLED3, HIGH); 
 digitalWrite(pinLED4, HIGH);  
 digitalWrite(pinLED5, LOW);
 delay(2000);
 digitalWrite(pinLED1, LOW);  
 digitalWrite(pinLED2, LOW);  
 digitalWrite(pinLED3, LOW); 
 digitalWrite(pinLED4, LOW);  
 digitalWrite(pinLED5, LOW);
 delay(2000);
  
}
