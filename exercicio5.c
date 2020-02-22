#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float raio,area;

    printf("Digite o raio:");
    scanf("%f", &raio);

    area = 3.14*pow(raio, 2);

    printf("A área do quadrado é %f", area);
}
