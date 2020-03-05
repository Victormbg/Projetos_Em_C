#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt_BR.UTF-8");
	float me,li,la,total;
	printf("Digite os metros quadradao a serem pintados: ");
	scanf("%f",&me);
	li = me/3;
	la = li/18;
	total = ceil(la)*180;
	printf("Você deve comprar %0.00f latas, com preço total de : %0.00f",ceil(la),total);	
}
