#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, ""); // importa as variáveis de ambiente
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas
    int num1,num2,soma;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    soma = num1+num2;
    printf("A soma dos dois números: %d", soma);
}
