#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);

 a = c + b;
 c = 2;
 printf("c: %d and a: %d\n", a, b, c);
}
