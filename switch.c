#include <stdio.h>

int main()
{
  char grade = 'B';

  switch (grade)
  {
  case 'A':
    printf("Excellent!\n");
    break;
  case 'B':
  case 'C':
    printf("Well done\n");
    break;
  case 'D':
    printf("You passed\n");
    break;
  case 'F':
    printf("Better try again\n");
    break;
  default:
    printf("Invalid grade\n");
  }

  printf("Your grade is  %c\n", grade);

  int choice = 1;

  switch (choice)
  {
  case 1: // must be a constant expression
    printf("You got Chocholate icecream.");
    break;
  case 1 + 1: // allowed expression since it is constant.
    printf("You got Vanilla icecream.");
    break;
  // case (choice + 1): // not allowed, since it is variable 
  //   printf("You got Vanilla icecream.");
  //   break;
  default:
    printf("You got nothing.");
  }
  printf("\n");
  return 0;
}