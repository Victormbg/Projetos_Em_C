#include <stdio.h>

int soma(int a, int b)
{
    int res;
    res = a + b;
    return printf("A soma de %d e %d e: %d", a, b, res);
}
int diminui(int a, int b)
{
    int res;
    res = a - b;
    return printf("A subtracao de %d e %d e: %d", a, b, res);
}
int multi(int a, int b)
{
    int res;
    res = a * b;
    return printf("A multiplicacao de %d e %d e: %d", a, b, res);
}

void main()
{
    int a, b;
    char escolha;
    printf("Entre com um numero: ");
    scanf("%d", &a);

    printf("Entre com outro numero: ");
    scanf("%d", &b);
    fflush(stdin);
    printf("Escolha entre '+' e '-' e '*': ");
    scanf("%c", &escolha);
    switch (escolha)
    {
    case '+':
        soma(a, b);
        break;

    case '-':
        diminui(a, b);
        break;

    case '*':
        multi(a, b);
        break;

    default:
        printf("VOCE DIGITOU ALGO ERRADO!\n");
    }
}