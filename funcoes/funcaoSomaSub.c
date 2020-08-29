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
    return printf("\nA subtracao de %d e %d e: %d", a, b, res);
}

void main()
{
    soma(10, 20);
    diminui(20,10);
}