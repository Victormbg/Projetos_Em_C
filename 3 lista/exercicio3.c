#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    setlocale(LC_CTYPE, "pt_BR.UTF-8");

    float not1, not2, not3, media;

    printf("\nDigite a primeira nota: ");
    scanf("%f", &not1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &not2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &not3);

    media = (not1 * 2 + not2 * 4 + not3 * 4) / 10;

    if (media >= 7 && media <= 10)
    {
        printf("\nVocê está aprovado com uma media de %d", media);
    }
    else if (media >= 5 && media <= 6.9)
    {
        printf("\nVocê está em recupera��o com uma media de %d", media);
    }
    else if (media >= 0 && media <= 4.9)
    {
        printf("\nVocê está reprovado com uma media de %d", media);
    }
    else
    {
        printf("ERRO");
    }
}
