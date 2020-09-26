//QUESTAO 2 - Victor Manuel de Barros Garcia - 20102283
#include <stdio.h>

int somatorio(int valor)
{
    int soma, i;
    for (i = 1, soma = 0; i <= valor; i++)
    {
        soma = soma + i;
    }
    return soma;
}

int main(void)
{
    int valor;
    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    printf("O somatorio de %d e igual a: %d\n", valor, somatorio(valor));
}