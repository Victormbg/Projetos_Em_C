#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float f,c;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = (5*(f-32)/9);

    printf("A temperatura em graus Celsius é %f",c);
}
