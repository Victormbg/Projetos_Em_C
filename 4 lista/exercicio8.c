#include <stdio.h>

int main()
{
	int i, idade, op, otimo = 0, bom = 0, pes65 = 0;

	for (i = 0; i < 2875; i++)
	{

		printf("\nDigite sua idade:");
		scanf("%d", &idade);
		printf("\nDigite o sua opiniao:");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			otimo = otimo + 1;
			break;
		case 2:
			bom = bom + 1;
			break;
		case 5:
			if (idade > 65)
			{
				pes65 = pes65 + 1;
			}
		}
	}
	printf("Otimo:%d", otimo);
	printf("Percentual de Bom:%.2f", bom / 2875 * 100);
	printf("\nPessimo maior que 65:%d", pes65);
}
