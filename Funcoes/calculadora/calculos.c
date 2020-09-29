#include "calculos.h"
#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) {
  int res;
  res = a + b;
  return printf("A soma de %d e %d e: %d\n\n", a, b, res);
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}
int diminui(int a, int b) {
  int res;
  res = a - b;
  return printf("A subtracao de %d e %d e: %d\n\n", a, b, res);
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}

int multi(int a, int b) {
  int res;
  res = a * b;
  return printf("A multiplicacao de %d e %d e: %d\n\n", a, b, res);
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}