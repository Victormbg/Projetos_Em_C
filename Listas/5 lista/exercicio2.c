#include <stdio.h>

int main() {
  int vet[10], i, soma = 0;
  float media;
  for (i = 0; I < 10; i++) {
    scanf(� % d�, &vet[i]);
  }
  for (i = 0; I < 10; i++) {
    printf(� % d�, vet[i]);
  }
  for (i = 9; I > -1; i--) {
    printf(� % d�, vet[i]);
  }
  for (i = 0; I < 10; i++) {
    if (vet[i] % 2 == 0) {
      printf(� % d�, vet[i]);
    }
  }
  for (i = 0; I < 10; i++) {
    soma = soma + vet[i];
  }
  media = soma / 10;
  printf(� % d�, media);
}
