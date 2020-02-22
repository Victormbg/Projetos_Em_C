#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, ""); // importa as variáveis de ambiente
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das dúvidas

    float n1,n2,n3,media;

    printf("Digite o primeiro nota: ");
    scanf("%f", &n1);

    printf("Digite o segundo nota: ");
    scanf("%f", &n2);

    printf("Digite o terceira nota: ");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("A média das três notas são: %f", media);
}
