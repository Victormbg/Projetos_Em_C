#include <stdio.h>

int main()
{
	int nivel, qtd;
	float salario, hora;
	printf("\n\nDigite o Nivel do Professor(1 ou 2):");
	scanf("%d", &nivel);
	printf("\n\nDigite a quantidade de horas trabalhada:");
	scanf("%d", &qtd);
	if (nivel == 1)
	{
		hora = 56.00;
	}
	else
	{
		hora = 66.00;
	}
	salario = qtd * hora;
	salario = salario + salario * 0.15;

	printf("\n\nO Salario do professor = %.2f", salario);
}
