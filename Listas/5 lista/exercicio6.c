#include <stdio.h>

int main() {

  int vet[10] = {1, 50, -2, 45, -9, 18, 22, 9, 100, -1};
  int i;
  int maior = -1000;
  int menor = 1000;
  for (i = 0; i < 9; i++) {
    if (vet[i] < menor) {
      menor = vet[i];
    }
    if (vet[i] > maior) {
      maior = vet[i];
    }
  }
  printf("\nO maior numero do vetor e: %d", maior);
  printf("\nO menor numero do vetor e: %d", menor);
}
