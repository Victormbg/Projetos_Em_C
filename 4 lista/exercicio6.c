#include <stdio.h>

int main()
{
	char nome;
	int i;
	float vvenda, comissao;
	float total = 0, totcom = 0;
	for (i = 0; i < 2000; i++)
	{
		fflush(stdin);
		printf("\nDigite o seu nome:");
		scanf("%c", &nome);
		printf("\nDigite o valor da venda:");
		scanf("%f", &vvenda);

		if (vvenda > 20000)
		{
			comissao = vvenda * 0.2;
		} // maior que 20.000
		else
		{
			if (vvenda >= 10000)
			{
				//menor ou igual a 20.000 e maior ou igual a 10.000
				comissao = vvenda * 0.15;
			}
			else
			{
				//menor que 10.000
				comissao = vvenda * 0.1;
			}
		}
		printf("O corretor %c deve receberr:%.2f", nome, comissao);
		total = total + vvenda;
		totcom = totcom + comissao;
	}
	printf("\nTotal de Vendas: %.2f", total);
	printf("\nTotal de Comissoes: %.2f", totcom);
}
