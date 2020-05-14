#include <stdio.h>
int main()
{

    float idade, aj, MulherAltura, HomemAltura, piM, piH;
    char sexo;

    printf("Digite o valor da sua idade em anos: ");
    scanf("%f", &idade);

    printf("Digite o valor da altura do Joelho (AJ) em centimetros (cm): ");
    scanf("%f", &aj);

    fflush(stdin);
    printf("Digite o sexo do individuo ('F' ou 'M'): ");
    scanf("%c", &sexo);

    if (sexo == "F")
    {
        MulherAltura = 84, 88 - (0, 24 * idade) + (1, 83 * aj);
        printf("\nA sua altura e: %.2f", MulherAltura);
        piM = (MulherAltura - 100) - (MulherAltura - 150 / 4);
        printf("\nO seu peso ideal estimado e: %.2f", piM);
    }
    else
    {
        HomemAltura = 64, 19 - (0, 04 * idade) + (2, 02 * aj);
        printf("\nA sua altura e: %.2f", HomemAltura);
        piH = (HomemAltura - 100) - (HomemAltura - 150 / 4);
        printf("\nO seu peso ideal estimado e: %.2f", piH);
    }
}
