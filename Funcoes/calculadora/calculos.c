#include "calculos.h"
#include <stdio.h>

int soma(int a, int b) {
  int res;
  res = a + b;
  return printf("A soma de %d e %d e: %d\n", a, b, res);
}
int diminui(int a, int b) {
  int res;
  res = a - b;
  return printf("A subtracao de %d e %d e: %d\n", a, b, res);
}
int multi(int a, int b) {
  int res;
  res = a * b;
  return printf("A multiplicacao de %d e %d e: %d\n", a, b, res);
}