#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    setlocale(LC_CTYPE, "pt_BR.UTF-8");

    int sala, capa, alu, sobra;

    printf("Digite a sala: ");
    scanf("%d", &sala);

    printf("Digite a capa: ");
    scanf("%d", &capa);

    printf("Digite os alunos: ");
    scanf("%d", &alu);

    sobra = capa - alu;

    if (sobra >= 0)
    {
        printf("sobra espa�o");
    }
    else
    {
        printf("nao sobra");
    }
}
