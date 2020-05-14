#include <stdio.h>

int main()
{

    int r1, resultado;
    resultado = 0;
    printf("1 - SIM | 2 - NAO\n");
    printf("\nTelefonou para a vítima");
    scanf("%d", &r1);
    resultado = resultado + r1;
    printf("\nEsteve no local do crime?");
    scanf("%d", &r1);
    resultado = resultado + r1;
    printf("\nMora perto da vítima?");
    scanf("%d", &r1);
    resultado = resultado + r1;
    printf("\nDevia para a vítima?");
    scanf("%d", &r1);
    resultado = resultado + r1;
    printf("\nJá trabalhou com a vítima?");
    scanf("%d", &r1);
    resultado = resultado + r1;
    printf("\n\nresultado= %d", resultado);
    switch (resultado)
    {
    case 2:
        printf("\n\nVoce e Suspeito");
        break;
    case 3:
    case 4:
        printf("\n\nVoce e Cumplice");
        break;
    case 5:
        printf("\n\nVoce e Assassino");
        break;
    default:
        printf("\n\nVocê e INOCENTE!!!");
    }
}
