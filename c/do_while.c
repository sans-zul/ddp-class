#include <stdio.h>

int main(int argc, char const *argv[])
{
  // deklarasi variable scope
  int a = 30;

  // ekpresi pengulangan do
  do
  {
    printf("nilai a = %d\n", a);
    a = a + 1;
  } while (a < 20);

  printf("semua selesai\n");
  return 0;
}
