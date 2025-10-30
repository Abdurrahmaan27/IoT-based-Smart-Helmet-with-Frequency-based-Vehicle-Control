#include <ultrasonic.h>
ultrasonic U1;

void setup() {
  U1.begin(6,7);
  Serial.begin(9600);

}

void loop() {
 int cm= U1.ultra_read();
 Serial.println(cm);
 delay(1000);
}

