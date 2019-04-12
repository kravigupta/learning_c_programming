#include <stdio.h>
#include <limits.h>

int main()
{
  printf("Storage size for float : %lu \n", sizeof(float));
  printf("Storage size for int : %lu \n", sizeof(int));
  
  printf("Storage size for long : %lu \n", sizeof(long));
  printf("Storage size for unsigned long : %lu \n", sizeof(unsigned long));
  printf("Storage size for signed long : %lu \n", sizeof(signed long));
  
  printf("Storage size for char : %lu \n", sizeof(char));
  printf("Storage size for unsigned char : %lu \n", sizeof(unsigned char));
  printf("Storage size for signed char : %lu \n", sizeof(signed char));
  printf("\n");
  return 0;
}