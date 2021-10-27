#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 1, b = 0;

  // operator and
  printf("operator an \n");
  printf("a && a : %d\n", a && a);
  printf("a && b : %d\n", a && b);
  printf("b && a : %d\n", b && a);
  printf("b && b : %d\n", b && b);

  // operator or
  printf("operator or \n");
  printf("a || a : %d\n", a || a);
  printf("a || b : %d\n", a || b);
  printf("b || a : %d\n", b || a);
  printf("b || b : %d\n", b || b);

  // operator not
  printf("operator not \n");
  printf("!a : %d\n", !a);
  printf("!b : %d\n", !b);

  return 0;
}
