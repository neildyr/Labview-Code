
int var;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

  if (Serial.available()) 
  {
    var = Serial.read();
   
    if (var =='a') 
    {digitalWrite(LED_BUILTIN, HIGH);
    Serial.print ("on");}
    else if (var == 'b'){digitalWrite(LED_BUILTIN, LOW);
    Serial.print ("off");}
   
  }
}
