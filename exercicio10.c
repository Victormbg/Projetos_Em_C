#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    int n1,n2,n3,total;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Digite o terceiro número: ");
    scanf("%d", &n3);

    total = (n1*2)+(n2/2);
    printf("O dobro do primerio com metade do segundo %d\n", total);

    total =(n1*3)+n3;
    printf("Triplo do primeiro com o terceiro %d\n", total);

    total =pow(n3,3);
    printf("Terceiro elevado ao cubo %d", total);
}
