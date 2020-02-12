const int UpButton = 12;
const int DownButton = 11;

void setup(){
   Serial.begin(9600);
   pinMode(UpButton, INPUT);
   pinMode(DownButton, INPUT);
} 

void loop(){
   if(digitalRead(UpButton) == HIGH){
  Serial.println("Up:");//It doesn't matter what you print. Just have a colon at the end to make it easier to parse the string.
  delay(100);
   }
   if(digitalRead(DownButton) == HIGH){
  Serial.println("Down:");
  delay(100);
   }

}
/*Add or subtract to the code for your application. Just make sure you do a Serial.println() 
* with a colon when you want to simulate a keypress.
*/
