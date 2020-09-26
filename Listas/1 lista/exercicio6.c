#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float b,h,dobro,area;

    printf("Digite a base(b): ");
    scanf("%f", &b);

    printf("Digite a altura(h): ");
    scanf("%f", &h);

    area = b*h;
    dobro = area*2;

    printf("A área do quadrado é %f com o valor em dobro de %f", area,dobro);
}
