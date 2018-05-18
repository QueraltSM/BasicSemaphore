int rled = 11;
int gled = 9;  
 
void setup() {
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
}
 
void loop() {
  rgbon(2000,1000,5000);
}
 
void rgbon(double delay_time_red,double delay_time_yellow,double delay_time_green){
  analogWrite(rled,255); 
  delay(delay_time_red);  
  analogWrite(rled,0); 
  analogWrite(rled,255); 
  analogWrite(gled,255); 
  delay(delay_time_yellow); 
  analogWrite(rled,0);
  analogWrite(gled,255); 
  delay(delay_time_green);            
  analogWrite(rled,255); 
  analogWrite(gled,255); 
  delay(delay_time_yellow);
  analogWrite(gled,0);
}