#include <stdio.h>

int main(int argc, char const *argv[])
{
  /* definisi variable lokal */
  int a = 11;
  // printf("masukan nilai a : ");
  // scanf("%d", &a);
  // periksa kondisi boolean menggunakan pernyataan if
  if (a == 20)
  {
    // jika kondisi benar maka tampilkan berikut ini
    printf("a kurang dari 20\n");
  }
  else if (a == 10)
  {
    // jika kondisi salah maka tampilkan berikut ini
    printf("a sama dengan 10\n");
  }
  else if (a < 25)
  {
    printf("a kurang dari 25\n");
    switch (a)
    {
    case 11:
    {
      printf("a sama dengan case 10\n");
      break;
    }
    }
  }
  else
  {
    printf("semua tidak memenuhi\n");
  }
  printf("a adalah : %d\n", a);
  return 0;
}