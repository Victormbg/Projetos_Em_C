#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float b,h,dobro,area;

    printf("Digite o quanto você ganha por hora: ");
    scanf("%f", &gh);

    printf("Digite quantas horas trabalhadas: ");
    scanf("%f", &ht);

    area = b*h;
    dobro = area*2;

    printf("A área do quadrado é %f com o valor em dobro de %f", area,dobro);
}
