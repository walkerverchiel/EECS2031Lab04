#include <wiringPi.h> 
int main (int argc, char *argv[]) 
{ 
  wiringPiSetup () ; 
  pinMode (0, OUTPUT) ; 
  for (;;) 
  { 
    digitalWrite (0, HIGH) ; delay (1000) ; 
    digitalWrite (0,  LOW) ; delay (500) ; 
  } 
  return 0 ; 
} 
