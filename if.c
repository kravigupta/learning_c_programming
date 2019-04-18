#include <stdio.h>
int main()
{
  auto int a = 4;
  int b = 10;
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  if (a > 4)
  {
    printf("a (%d) is greater than 4\n", a);
  }
  else if (a < 4)
  {
    printf("a (%d) is smaller than 4\n", a);
  }
  else
  {
    printf("a (%d) is equals to 4, Now checking for b\n", a);
    if (b > 4)
    {
      printf("b (%d) is greater than 4\n", b);
    }
    else if (b < 4)
    {
      printf("b (%d) is smaller than 4\n", b);
    }
    else
    {
      printf("b (%d) is equals to 4\n", b);
    }
  }

  return 0;
}