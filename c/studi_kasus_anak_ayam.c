#include <stdio.h>

int main(int argc, char const *argv[])
{
  int N = 10;
  int i;
  for (i = N; i > 0; i--)
  {
    if (i == 1)
    {
      printf("Anak ayam turun %d, mati satu tinggal induknya\n", i);
    }
    else
    {
      printf("Anak ayam turun %d, mati satu tinggal %d\n", i, i - 1);
    }
  }

  return 0;
}