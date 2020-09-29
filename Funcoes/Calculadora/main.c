#include "calculos.h"
#include <stdio.h>

int main() {
  int escolha = 1;
  do {
    printf("======Calculadora=========");
    printf("-------------------------|\n");
    printf("|     MENU DE OPCOES     |\n");
    printf("|                        |\n");
    printf("|  0 - SAIR DO GAME      |\n");
    printf("|  1 - SOMAR             |\n");
    printf("|  2 - SUBTRAIR          |\n");
    printf("|  3 - MULTIPLICAR       |\n");
    printf("|------------------------|\n");
    printf("O QUE DESEJA FAZER?       \n");
    scanf("%d", &escolha);
    switch (escolha) {
    case 0:
      sair();
      break;

    case 1:
      soma();
      break;

    case 2:
      diminui();
      break;

    case 3:
      multi();
      break;

    default:
      printf("VOCE DIGITOU ALGO ERRADO!\n");
    }
  } while (escolha);
}