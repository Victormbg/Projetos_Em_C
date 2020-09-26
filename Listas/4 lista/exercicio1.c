#include <stdio.h>

int main()
{
  int i, soma;
  soma = 0;
  for (i = 1; i < 201; i = i + 1)
  {
    soma = soma + i;
  }
  printf("\n\nsoma = %d", soma);
}
