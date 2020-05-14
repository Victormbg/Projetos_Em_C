#include <stdio.h>

int main()
{
  int i, idade, soma = 0, cont = 0;
  float altura, media, medalt, somalt = 0.0;

  for (i = 0; i < 46; i = i + 1)
  {
    printf("\n\nDigite sua idade:");
    scanf("%d", &idade);
    printf("\n\nDigite sua altura:");
    scanf("%f", &altura);
    soma = soma + idade;
    if (idade < 20)
    {
      cont = cont + 1;
      somalt = somalt + altura;
    }
  }

  media = soma / 46;
  medalt = somalt / cont;
  printf("\n\nmedia idade = %.2f", media);
  printf("\n\nmedia altura idade>20 = %.2f", medalt);
}
