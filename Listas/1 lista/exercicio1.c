#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O numero informado foi %d", num);
}
