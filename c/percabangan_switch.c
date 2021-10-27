#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 5;
  int b = 20;
  switch (a)
  {
  case 5:
  {
    printf("ini adalah a sama dengan 5\n");
    if (b == 20)
    {
      printf("ini adalah if b == 20\n");
    }

    break;
  }
  case 10:
  {
    printf("ini adalah a sama dengan 10\n");
    break;
  }
  case 15:
  {
    printf("ini adalah a sama dengan 15\n");
    break;
  }
  default:
  {
    printf("a masuk ke default\n");
    break;
  }
  }

  printf("semua selesai");
  return 0;
}