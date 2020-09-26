//QUESTAO 4 - Victor Manuel de Barros Garcia - 20102283
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

float subtrair()
{
    float n1 = 0, n2 = 0, res = 0;
    system("cls");
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    res = (n1 - n2);
    printf("O resultado da subtracao foi %.1f\n\n", res);
    getchar();
    printf("PRESSIONE ENTER PARA VOLTAR...");
    getchar();
    system("cls");
}

int restoDivisao()
{
    int n1 = 0, n2 = 0, res = 0;
    system("cls");
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    res = (n1 % n2);
    printf("O resultado do resto da divisao foi %d\n\n", res);
    getchar();
    printf("PRESSIONE ENTER PARA VOLTAR...");
    getchar();
    system("cls");
}

float raizQuadrada()
{
    float num = 0, res = 0;
    system("cls");
    printf("Digite um numero: ");
    scanf("%f", &num);
    res = (int)sqrt(num);
    printf("O resultado da raiz quadrada foi %.1f\n\n", res);
    getchar();
    printf("PRESSIONE ENTER PARA VOLTAR...");
    getchar();
    system("cls");
}

void sair()
{
    system("cls");
    printf("Deseja continuar? s - Sim ou n - Nao.\n");
    char opcao;
    scanf("%s", &opcao);
    fflush(stdin);
    if (opcao == 'N' || opcao == 'n')
    {
        system("cls");
        printf("Fechando programa...\n");
        sleep(1);
        exit(0);
    }
    else
    {
        system("cls");
    }
}

int main()
{
    system("cls");
    float num1 = 0, num2 = 0;
    int op = 1;
    do
    {
        printf("Calculadora C\n");
        printf("1 - Subtrair \n");
        printf("2 - Resto da divisao inteira \n");
        printf("3 - Raiz quadrada\n");
        printf("4 - Sair do programa\n");
        printf("Entre com a opcao desejada: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        {
            subtrair();
            break;
        }
        case 2:
        {
            restoDivisao();
            break;
        }
        case 3:
        {
            raizQuadrada();
            break;
        }
        case 4:
        {
            sair();
            break;
        }
        default:
            printf("Digite uma opcao valida\n");
        }
    } while (op);
}