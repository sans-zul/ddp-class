#include <stdio.h>

int main(int argc, char const *argv[])
{
  // mendeklarasikan a = 10
  int a = 1;

  while (a < 20)
  {
    // pernyataan yang akan diulangi
    printf("ini adalah perulangan %d\n", a);
    a = a + 1;
  }

  printf("semua selesai\n");

  return 0;
}
