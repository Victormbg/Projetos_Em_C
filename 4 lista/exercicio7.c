#include <stdio.h>

int main()
{
	int i, mat, qhext, qhatr, dep, ts;
	float sb, inss, bonus, shext, vextra, hnormal, atraso;
	float sliq, auxch;
	for (i = 0; i < 200; i++)
	{
		printf("\nDigite sua matricula:");
		scanf("%d", &mat);
		printf("\nDigite o seu salario bruto:");
		scanf("%f", &sb);
		printf("\nDigite qtd horas extras:");
		scanf("%d", &qhext);
		printf("\nDigite qtd horas atraso:");
		scanf("%d", &qhatr);
		printf("\nDigite qtd dependentes:");
		scanf("%d", &dep);
		printf("\nDigite o tempo de servico:");
		scanf("%d", &ts);

		auxch = dep * 150;
		inss = 0.1 * sb;
		bonus = 50 * ts;
		hnormal = sb / 160;
		shext = hnormal * 1.1;
		atraso = hnormal * qhatr;
		vextra = shext * qhext;
		sliq = (sb - (inss + atraso)) + (bonus + auxch + vextra);
		printf("matricula:%d", mat);
		printf("Salario Bruto:%.2f", sb);
		printf("\nValor Hora Extra:%.2f", shext);
		printf("\nValor Desconto Atraso:%.2f", atraso);
		printf("\nValor auxilio creche:%.2f", auxch);
		printf("\nValor bonus:%.2f", bonus);
		printf("\nSalario Liquido:%.2f", sliq);
	}
}
