#include <stdio.h>

int main()
{

  char tipo;
  int qtd, i;
  float valor, vcomb, desc;
  for (i = 0; i < 10; i = i + 1)
  {
    fflush(stdin);
    printf("\n\nDigite o tipo de combust�vel(A ou G):");
    scanf("%c", &tipo);
    printf("\n\nDigite a quantidade de litros de combustivel:");
    scanf("%d", &qtd);

    if (toupper(tipo) == 'A')
    {
      // Alcool
      vcomb = 4.39;
      if (qtd <= 20)
      {
        desc = 0.03;
      }
      else
      { //maior que 20
        desc = 0.05;
      }
    }
    else
    {
      //Gasolina
      vcomb = 5.19;
      if (qtd <= 20)
      {
        desc = 0.04;
      }
      else
      { //maior que 20
        desc = 0.06;
      }
    }
    valor = qtd * vcomb;
    valor = valor - valor * desc;
    printf("\n\nValor a pagar = %.2f", valor);
  }
}
