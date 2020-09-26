#include <stdio.h>
int main() {

  int i, lado;
  int vetor[6] = {0, 0, 0, 0, 0, 0};

  for (i = 0; i <= 8; i++) {
    printf("Digite a face do dado:");
    scanf("%d", &lado);
    vetor[lado - 1]++;
  }

  for (i = 0; i < 6; i++) {
    printf("A face %d caiu %d vezes. \n", i + 1, vetor[i]);
  }
}
