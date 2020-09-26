#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float altura,peso;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    peso = (72.7*altura)-58;

    printf("O seu peso ideal é: %f", peso);
}
