#include <stdio.h>

int main()
{
	int i, soma, cont, num;
	soma = 0;
	cont = 0;
	for (i = 0; i < 100; i = i + 1)
	{
		printf("\nDigite um numero:");
		scanf("%d", &num);
		if (num > 0)
		{
			soma = soma + num;
		}
		else
		{
			cont = cont + 1;
		}
	}
	printf("\n\nsoma positivos = %d", soma);
	printf("\n\nQtd de negativos digitados = %d", cont);
}
