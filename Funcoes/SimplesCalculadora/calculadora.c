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

int main() {
  int escolha = 1;
  do {
    int a, b;
    printf("Entre com um numero: ");
    scanf("%d", &a);
    printf("Entre com outro numero: ");
    scanf("%d", &b);
    printf("Escolha entre 1  = '+' e 2 = '-' e 3 = '*': ");
    scanf("%d", &escolha);
    switch (escolha) {
    case 1:
      soma(a, b);
      break;

    case 2:
      diminui(a, b);
      break;

    case 3:
      multi(a, b);
      break;

    default:
      printf("VOCE DIGITOU ALGO ERRADO!\n");
    }
  } while (escolha);
}
