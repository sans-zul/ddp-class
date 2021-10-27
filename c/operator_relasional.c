#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 21;
  int b = 10;
  int c;

  // sama dengan
  printf("a == b : %d\n", a == b);
  // tidak sama dengan
  printf("a != b : %d\n", a != b);
  // lebih dari
  printf("a > b : %d\n", a > b);
  // kurang dari
  printf("a < b : %d\n", a < b);
  // lebih dari sama dengan
  printf("a >= b : %d\n", a >= b);
  // kurang dari sama dengan
  printf("a <= b : %d\n", a <= b);

  return 0;
}