#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

 char b = 'c';

  // print value and size of  a char variable
  printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));

float d = 17.45;
 // print value and size of a float variable 
 printf("float d value: %f and size: %lu bytes\n", d, sizeof(d));

double e = 132.568;
// print value and size of a double variable
 printf("float e value: %f and size: %lu bytes\n", e, sizeof(e));

unsigned int i = 7;
//print value and size of an unsigned int variable
 printf("unsigned int i value: %d and size: %lu bytes\n", i, sizeof(i));

signed int j = -9;
// print value and size of a signed int variable
 printf("signed int j value: %d and size: %lu bytes\n", j, sizeof(j));

}

