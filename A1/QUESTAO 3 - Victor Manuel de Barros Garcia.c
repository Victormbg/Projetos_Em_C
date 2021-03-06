//QUESTAO 3 - Victor Manuel de Barros Garcia - 20102283
#include <stdio.h>
#include <stdlib.h>
#define tam 3

int i, j, mat1[tam][tam], mat2[tam][tam], mat3[tam][tam];

int EntrarMatriz()
{
    printf("\n============ SOMA DE MATRIZES 3x3 =============\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite um valor para a matriz A: [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    system("cls");
    printf("\n==============SOMA DE MATRIZES 3x3==============\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite um valor para a matriz B: [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    system("cls");
}

void Somar(int mat1[][tam], int mat2[][tam])
{
    int i;
    int j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3.d\t", mat3[i][j]);

        printf("\n\n");
    }
}

int Imprime()
{
    printf("\nMatriz A:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3.d\t", mat1[i][j]);
        printf("\n\n");
    }
    printf("Matriz B:\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%3.d\t", mat2[i][j]);
        printf("\n\n");
    }
}

int main()
{
    system("cls");
    EntrarMatriz();
    Imprime();
    printf("A soma das matrizes A e B: \n\n");
    Somar(mat1, mat2);
}
