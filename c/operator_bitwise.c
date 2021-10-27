#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 60;
  int b = 13;
  printf("a & b : %d\n", a & b);
  printf("a | b : %d\n", a | b);
  printf("a ^ b : %d\n", a ^ b);
  printf("~a : %d\n", ~a);
  printf("~b : %d\n", ~b);
  return 0;
}