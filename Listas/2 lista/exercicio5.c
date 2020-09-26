#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "");
    setlocale(LC_CTYPE, "pt_BR.UTF-8");
    int sal, novoSal;
    printf("Digite o seu salario: ");
    scanf("%d", &sal);
    if (sal <= 1300)
    {
        novoSal = sal + 0.50;
        printf("O seu novo salario com o reajuste de 50 % ser� %d", novoSal);
    }
    else if (sal > 1300)
    {
        novoSal = sal + 0.30;
        printf("O seu novo salario com o reajuste de 30 % sera %d", novoSal);
    }
    else
    {
        printf("ERRO");
    }
}
