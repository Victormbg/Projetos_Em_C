#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "");
    setlocale(LC_CTYPE, "pt_BR.UTF-8");

    float val1, val2, resultado;
    char simbolo;
    printf("CALCULADORA");
    printf("\n\nDigite o primeiro valor: ");
    scanf("%f", &val1);
    printf("\n\nDigite o segundo valor: ");
    scanf("%f", &val2);
    fflush(stdin);
    printf("\n\nDigite um operador( + | - | * | / ): ");
    scanf("%c", &simbolo);

    switch (simbolo)
    {
    case '+':
        resultado = val1 + val2;
        break;
    case '-':
        resultado = val1 - val2;
        break;
    case '*':
        resultado = val1 * val2;
        break;
    case '/':
        resultado = val1 / val2;
        break;
    default:
        printf("ERRO - Simbolo Invalido");
    }

    printf("\n%.1f %c %.1f = %.1f", val1, simbolo, val2, resultado);
}
