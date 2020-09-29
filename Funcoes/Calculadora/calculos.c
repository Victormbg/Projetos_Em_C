#include "calculos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void soma() {
  int a, b, res;
  system("clear || cls");
  printf("Entre com um numero: ");
  scanf("%d", &a);
  printf("Entre com outro numero: ");
  scanf("%d", &b);
  res = a + b;
  printf("A soma de %d e %d e: %d\n\n", a, b, res);
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}
void diminui() {
  int a, b, res;
  system("clear || cls");
  printf("Entre com um numero: ");
  scanf("%d", &a);
  printf("Entre com outro numero: ");
  scanf("%d", &b);
  res = a - b;
  printf("A subtracao de %d e %d e: %d\n\n", a, b, res);
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}

void multi() {
  int a, b, res;
  system("clear || cls");
  printf("Entre com um numero: ");
  scanf("%d", &a);
  printf("Entre com outro numero: ");
  scanf("%d", &b);
  res = a * b;
  printf("A multiplicacao de %d e %d e: %d\n\n", a, b, res);
  getchar();
  printf("PRESSIONE ENTER PARA VOLTAR...");
  getchar();
  system("clear || cls");
}

void sair() {
  char opcao;
  system("clear || cls");
  printf("Deseja continuar? s - Sim ou n - Nao.\n");
  scanf("%s", &opcao);
  fflush(stdin);
  if (opcao == 'N' || opcao == 'n') {
    system("clear || cls");
    printf("Fechando programa...\n");
    sleep(1);
    exit(0);
  } else {
    system("cls");
  }
}