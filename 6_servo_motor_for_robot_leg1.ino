// C++ code
//
#include <Servo.h>

Servo servo1;  // Left Hip
Servo servo2;  // Right Hip
Servo servo3;  // Left Knee
Servo servo4;  // Right Knee
Servo servo5;  // Left Ankle
Servo servo6;  // Right Ankle

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
  servo6.attach(11);
}

void loop()
{
  // Step 1: Move right leg forward
  servo1.write(90);   // Left hip neutral
  servo2.write(45);   // Right hip forward
  servo3.write(90);   // Left knee straight
  servo4.write(135);  // Right knee bent
  servo5.write(90);   // Left ankle neutral
  servo6.write(45);   // Right ankle adjusted
  delay(500);         // Wait for 500 milliseconds
  
  // Step 2: Move right leg back to neutral
  servo2.write(90);   // Right hip neutral
  servo4.write(90);   // Right knee straight
  servo6.write(90);   // Right ankle neutral
  delay(500); 

  // Step 3: Move right leg to neutral, move left leg forward
  servo1.write(45);   // Left hip forward
  servo2.write(90);   // Right hip neutral
  servo3.write(135);  // Left knee bent
  servo4.write(90);   // Right knee straight
  servo5.write(45);   // Left ankle adjusted
  servo6.write(90);   // Right ankle neutral
  delay(500);         // Wait for 500 milliseconds  
  
  // Step 4: Move left leg back to neutral
  servo1.write(90);   // Left hip neutral
  servo3.write(90);   // Left knee straight
  servo5.write(90);   // Left ankle neutral
  delay(500);         // Wait for 500 milliseconds
}