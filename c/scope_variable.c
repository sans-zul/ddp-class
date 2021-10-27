#include <stdio.h>
#define PI 3.14159
#define ABC "abc"

// area root/public
int A = 20; // variable global terhadap fungsi main
int b = 30;

int main(int argc, char const *argv[]) // parameter
{
  // area main (scope main / child main)

  int a = 10; // variable local terhadap fungsi main
  int b = 40;
  printf("a : %d\n", a);
  printf("A : %d\n", A);
  printf("b : %d\n", b);
  // printf("argc : %d\n", argc);
  // printf("argv[0] : %s\n", argv[0]);
  printf("PI : %f\n", 3.14159);
  printf("PI : %f\n", PI);
  return 0;
}