#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float gh,ht,total;

    printf("Digite o quanto voc� ganha por hora: ");
    scanf("%f", &gh);

    printf("Digite quantas horas trabalhadas no m�s: ");
    scanf("%f", &ht);

    total = (gh*ht);

    printf("O total do s�lario em um m�s de trabalho � %f",total);
}
