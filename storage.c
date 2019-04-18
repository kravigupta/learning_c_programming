#include <stdio.h>
extern int c;
static int d = 5; // declared/defined only once
int main()
{
  auto int a = 2;
  register int b = 4; // stored in register
  int c = 3; // always need to define.
  static int e = 9; // declared/defined only once
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
  return 0;
}