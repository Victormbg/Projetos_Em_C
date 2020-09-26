#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float f,c;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = (c*9/5)+32;

    printf("A temperatura em graus Fahrenheit é %f",f);
}
