#include <stdio.h>

int Fatorial(int num)
{
    int i, resultado = 1;
    for (i = 1; i <= num; i++)
    {
        resultado *= 1;
    }
    return resultado;
}
void main()
{
    int num, b;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);
    b = Fatorial(num);
    printf("\nO Fatorial do numero = %d", b);
    return 0;
}
