#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 10;
  int b = 20;

  // penjumlahan
  int c = a + b;
  printf("c : %d\n", c);
  // pengurangan
  int d = a - b;
  printf("d : %d\n", d);
  // perkalian
  int e = a * b;
  printf("e : %d\n", e);
  // pembagian
  int f = a / b;
  printf("f : %d\n", f);
  // module
  int g = b % a;
  printf("g : %d\n", g);
  // increment
  // printf(a++);
  int hasil_inc_a_kanan = a++; // tipe 1
  printf("a++ kanan : %d\n", hasil_inc_a_kanan);
  printf("a++ kanan after: %d\n", hasil_inc_a_kanan);
  a = 10;
  int hasil_inc_a_kiri = ++a; // tipe 2
  printf("a++ kiri : %d\n", hasil_inc_a_kiri);
  // decrement
  // printf(a--);
  int hasil_dec_b = b--;
  b = 20;
  int hasil_dec_b_kiri = --b;
  printf("b-- : %d\n", hasil_dec_b);

  return 0;
}
