#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, ""); // importa as vari�veis de ambiente
    setlocale (LC_CTYPE, "pt_BR.UTF-8"); // por via das d�vidas

    float n1,n2,n3,media;

    printf("Digite o primeiro nota: ");
    scanf("%f", &n1);

    printf("Digite o segundo nota: ");
    scanf("%f", &n2);

    printf("Digite o terceira nota: ");
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    printf("A m�dia das tr�s notas s�o: %f", media);
}
