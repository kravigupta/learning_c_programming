#include <stdio.h>

extern int dd;
int main()
{
  printf("Hello variables..\n");
  // declaring integer variables, variable definition
  int a, b, c;
  // initialization
  a = 10;
  b = 20;
  c = 40;

  int hex = 0xFFDDCC;
  int oct = 0345;

  int dd = 20;
  // 85         /* decimal */
  // 0213       /* octal */
  // 0x4b       /* hexadecimal */
  // 30         /* int */
  // 30u        /* unsigned int */
  // 30l        /* long */
  // 30ul       /* unsigned long */



  return 0;
}