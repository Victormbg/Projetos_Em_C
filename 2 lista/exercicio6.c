#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "");
    setlocale(LC_CTYPE, "pt_BR.UTF-8");
    int a, b, c, ret, obs, acu;
    printf("Digite o lado A: ");
    scanf("%d", &a);
    printf("Digite o lado A: ");
    scanf("%d", &b);
    printf("Digite o lado A: ");
    scanf("%d", &c);

    ret = pow(a, 2) + (pow(b, 2) + pow(c, 2));
    obs = (pow(a, 2) > pow(b, 2) + pow(c, 2));
    acu = (pow(a, 2) < pow(b, 2) + pow(c, 2));
    printf("\nO tri�ngulo dos lados %d , %d , %d � Retangulo %d", a, b, c, ret);
    printf("\nO tri�ngulo dos lados %d , %d , %d � Obtus�ngulo %d", a, b, c, obs);
    printf("\nO tri�ngulo dos lados %d , %d , %d � Acut�ngulo %d", a, b, c, acu);
}
