#include <stdio.h>

int Potencia(int base, int exp)
{
    int i, resultado = 1;
    for (i = 1; i <= exp; i++)
    {
        resultado *= base;
    }
    return printf("A potencia e : %d", resultado);
}

int main()
{
    int base, exp;
    printf("Entre com o numero da base: ");
    scanf("%d", &base);
    printf("Entre com o numero do expoente: ");
    scanf("%d", &exp);
    Potencia(base, exp);
}
