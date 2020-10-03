//QUESTAO 4 - Victor Manuel de Barros Garcia - 20102283
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

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

int subtrair()
{
    int n1 = 0, n2 = 0, res = 0;
    system("cls");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    res = (n1 - n2);
    printf("O resultado da subtracao foi %d\n\n", res);
    getchar();
    printf("PRESSIONE ENTER...");
    getchar();
    system("cls");
    sair();
}

int restoDivisao()
{
    int n1 = 0, n2 = 0, res = 0;
    system("cls");
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    res = n1 % n2;
    printf("O resultado do resto da divisao foi %d\n\n", res);
    getchar();
    printf("PRESSIONE ENTER...");
    getchar();
    system("cls");
    sair();
}

int raizQuadrada()
{
    int num = 0, res = 0;
    system("cls");
    printf("Digite um numero: ");
    scanf("%d", &num);
    res = sqrt(num);
    printf("O resultado da raiz quadrada foi %d\n\n", res);
    getchar();
    printf("PRESSIONE ENTER...");
    getchar();
    system("cls");
    sair();
}

int main()
{
    system("cls");
    int op = 1;
    do
    {
        printf("Calculadora C\n");
        printf("1 - Subtrair \n");
        printf("2 - Resto da divisao inteira \n");
        printf("3 - Raiz quadrada\n");
        printf("4 - Sair da calculadora\n");
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