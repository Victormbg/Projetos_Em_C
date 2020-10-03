//QUESTAO 2 - Victor Manuel de Barros Garcia - 20102283
#include <stdio.h>
#include <stdlib.h>

int somatorio(int n)
{
    int soma = 0, i;
    for (i = 1; i <= n; i++)
    {
        soma = soma + i / (i + 1);
    }
    return soma;
}

int main()
{
    system("cls || clear");
    int n;
    printf("====== Calculadora de somatorio ========\n");
    printf("Digite um numero inteiro e positivo N: ");
    scanf("%d", &n);
    printf("O somatorio de %d e igual a: %d\n", n, somatorio(n));
}