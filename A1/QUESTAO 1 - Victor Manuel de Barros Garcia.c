//QUESTAO 1 - Victor Manuel de Barros Garcia - 20102283
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float Calcular()
{
    float a, b, c, d, i, real;
    char op;
    do
    {
        system("cls");
        printf("Calculadora para raizes da equacao do segundo grau:\n");
        printf("\n\tA*x^2 + B*x + C = 0 \t\n");
        printf("\nEntre com o valor de A:\n");
        scanf("%f", &a);
        printf("Entre com o valor de B:\n");
        scanf("%f", &b);
        printf("Entre com o valor de C:\n");
        scanf("%f", &c);
        while (a == 0)
        {
            printf("ERRO! Entre com o valor de A diferente de zero:\n");
            scanf("%f", &a);
        }
        d = ((b * b) - 4 * (a * c));
        printf("\nO Delta dessa equacao foi: %.2f\n", d);
        if (d == 0)
        {
            printf("Existe uma raiz real dada por:\nX = %.2f", (-b / 2 * a));
        }
        else
        {
            if (d > 0)
            {
                printf("Existe duas raizes reais dadas por:\nX1 = %.2f\nX2 = %.2f\n", ((-b + sqrt(d)) / (2 * a)), ((-b - sqrt(d)) / (2 * a)));
            }
            else if (d < 0)
            {
                printf("Nao existe raiz real.");
            }
        }
        printf("\n\nDeseja fazer outro calculo? (S)/(N):\n");
        scanf("%s", &op);
    } while (op == 's' || op == 'S');
}

int main()
{
    system("cls");
    Calcular();
}
