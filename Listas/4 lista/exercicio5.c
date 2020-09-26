#include <stdio.h>

int main()
{
	char nome;
	int i;
	float vcompra, desconto, pagar;
	float total = 0;
	for (i = 0; i < 2; i++)
	{
		fflush(stdin);
		printf("\nDigite o seu nome:");
		scanf("%c", &nome);
		printf("\nDigite o valor da compra:");
		scanf("%f", &vcompra);

		if (vcompra >= 500)
		{
			desconto = 0.2 * vcompra;
		}
		else
		{
			desconto = 0.15 * vcompra;
		}
		pagar = vcompra - desconto;
		total = total + pagar;
		printf("O cliente %c deve pagar:%.2f", nome, pagar);
	}
	printf("\nTotal da Loja: %.2f", total);
}
