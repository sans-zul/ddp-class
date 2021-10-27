
#include <stdio.h>

int main(int argc, char const *argv[])
{

  int i;
  for (i = 0; i < 20; i = i + 1)
  {
    if (i == 10)
    {
      printf("ini adalah return\n");
      return;
    }
    printf("i adalah %d\n", i);
  }
  printf("semua selesai");

  return 0;
}
