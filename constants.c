#include <stdio.h>

#define PI 3.14 // constants can be defined using #define

int main(){

  int r = 10;
  const float AREA = PI * r * r; // constants can also be defined using const keyword

  printf("Pi value is %f\n", PI);
  printf("Radius   is %d\n", r);
  printf("Area     is %f\n", AREA);
  
  return 0;
}