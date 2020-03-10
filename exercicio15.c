#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");
	float mb,total,tmb,seg,vel;
	printf("Digite o tamanho do arquivo em MB: ");
	scanf("%f",&mb);
	printf("Digite a velocidade da internet em Mb: ");
	scanf("%f",&vel);
	
	tmb = mb*8;
	seg = tmb/vel;
	total = seg/60;
	printf("Seu dowload tera velocidade de %f",total);	
}
