#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");
	float me,li,la,total;
	printf("Digite os metros quadradao a serem pintados: ");
	scanf("%f",&me);
	li = me/3;
	la = li/18;
	total = la*180;
	printf("Você deve comprar %f latas, com preço total de : %f",la,total);	
}
