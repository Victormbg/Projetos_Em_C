#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float gh,ht,total;

    printf("Digite o quanto você ganha por hora: ");
    scanf("%f", &gh);

    printf("Digite quantas horas trabalhadas no mês: ");
    scanf("%f", &ht);

    total = (gh*ht);

    printf("O total do sálario em um mês de trabalho é %f",total);
}
