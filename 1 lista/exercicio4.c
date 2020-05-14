#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float me,cm;

    printf("Digite os metros: ");
    scanf("%f", &me);

    cm = me*100;

    printf("O valor em centimetros são: %f", cm);
}
