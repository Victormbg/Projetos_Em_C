#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, ""); // importa as vari�veis de ambiente
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das d�vidas
    int num1,num2,soma;
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    soma = num1+num2;
    printf("A soma dos dois n�meros: %d", soma);
}
