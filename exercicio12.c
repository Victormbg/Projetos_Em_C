#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");

    float gh,ht,bruto,bruto1,liquido;

    printf("Digite o quanto voc� ganha por hora: ");
    scanf("%f", &gh);

    printf("Digite quantas horas trabalhadas no m�s: ");
    scanf("%f", &ht);

    bruto = (gh*ht);
    printf("O salario bruto %f\n", bruto);
    bruto1 = bruto*0.11;
    printf("O imposto de renda %f\n", bruto1);
    bruto1 = bruto*0.08;
    printf("O INSS %f\n", bruto1);
    bruto1 = bruto*0.05;
    printf("O sindicato %f\n", bruto1);
    liquido = bruto-(bruto*0.11)-(bruto*0.08)-(bruto*0.05);
    printf("O s�lario liquido � %f\n", liquido);
}
