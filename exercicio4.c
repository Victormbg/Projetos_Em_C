#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, ""); // importa as vari�veis de ambiente
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das d�vidas

    float me,cm;

    printf("Digite os metros: ");
    scanf("%f", &me);

    cm = me*100;

    printf("O valor em centimetros s�o: %f", cm);
}
