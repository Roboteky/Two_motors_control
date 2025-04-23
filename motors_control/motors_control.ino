//enA  ---> 2         enB ---> 7
  
//inpt1 --> 3         inp3 --> 5
  
   
//inp 2 ---> 4        inpt4 --> 6 


// Add an ultrasonic sensor to control the stop start of the motors //
  
  
  
//motor one
  
int enA = 2;

int in1 = 3;

int in2 = 4;


//motor two

int enB = 7;

int in3 = 5;

int in4 = 6;


void setup(){
  
  
  Serial.begin(9600);


// motor control pins
  
  pinMode(enA, OUTPUT);

  pinMode(enB, OUTPUT);
  
  
  pinMode(in1, OUTPUT);
  
  pinMode(in2, OUTPUT);
  
  
  pinMode(in3, OUTPUT);
  
  pinMode(in4, OUTPUT);
  
  
  
  
 // MOTORS TO BE LOW FIRST
  
  digitalWrite(in1, LOW);
  
  digitalWrite(in2, LOW);
  
  
  digitalWrite(in3, LOW);
  
  digitalWrite(in4, LOW);
  
}

void loop(){

directionControl();
  
delay(1000);
  
speedControl();
  
delay(1000);

}


void directionControl(){
  
analogWrite(enA, 255);
  
analogWrite(enB, 255);
  
  
// motor 1 and 2 turned on
  
  
 digitalWrite(in1, HIGH);
  
 digitalWrite(in2, LOW);
  
 Serial.println("motor 1 turned ON");
  
  
 digitalWrite(in3, HIGH);
  
 digitalWrite(in4,LOW);
  
 Serial.println("Motor 2 turned ON");
  
// MOTORS OFF
  
  digitalWrite(in1, LOW);
  
  digitalWrite(in2, LOW);
  
  digitalWrite(in3, LOW);
  
  digitalWrite(in4, LOW);
  
  Serial.println("Motors OFF");
  
  
}

void speedControl(){
  
  // turns n the motors
  
  digitalWrite(in1, LOW);
  
  digitalWrite(in2, HIGH);
  
  
  
  
  digitalWrite(in3, LOW);
  
  digitalWrite(in4, HIGH);
  
  
  
// ACC THE MOTORS FROM 0 TO MAX SPEED.
  
  for(int i = 0; i < 255; i++){
    
    analogWrite(enA, i);
    
    analogWrite(enB, i);
    
    delay(30);
    
    
  }
  
  
  // decrement
  
  
  for(int i = 255; i >= 0 ; --i){
    
    analogWrite(enA, i);
    
    analogWrite(enB, i);
    
    delay(30);
  
  
  
  }
  
  digitalWrite(in1, LOW);
  
  digitalWrite(in2, LOW);
  
  
  digitalWrite(in3, LOW);
  
  digitalWrite(in4, LOW);
  
  
  Serial.println("Motors OFF");
  
  
  
}
  
  
  
  
  
  
  
  
  
  
