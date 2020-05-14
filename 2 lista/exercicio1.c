#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "");
    setlocale(LC_CTYPE, "pt_BR.UTF-8");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("O numero e positivo");
    }
    else
    {
        printf("O n�mero � negativo");
    }
}
