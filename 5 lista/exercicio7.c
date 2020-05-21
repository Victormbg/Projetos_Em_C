#include <stdio.h>

int main() {

  int vet[10] = {1, 50, -2, 45, -9, 18, 22, 9, 100, -1};
  int i;
  int maior = vet[0];
  int maior2 = vet[0];
  for (i = 1; i < 9; i++) {
    if (vet[i] > maior) {
      maior2 = maior;
      maior = vet[i];
    } else {
      if (vet[i] > maior2) {
        maior2 = vet[i];
      }
    }
  }
  printf("\nO maior numero do vetor e: %d", maior);
  printf("\nO segundo maior numero do vetor e: %d", maior2);
}
