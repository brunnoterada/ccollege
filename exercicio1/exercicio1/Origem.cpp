#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[30], *pnome;
	float salario, *psalario, oliquota, *poliquota, salarioreduzido;

	printf("Digite seu Nome Completo: ");
	gets_s(nome);

	printf("Digite seu salario: ");
	scanf_s("%f", &salario);

	pnome = nome;
	psalario = &salario;
	

	if (1903.98 >= *psalario)
	{
		oliquota = 0;
		poliquota = &oliquota;
		printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
		printf("Olá %s!\n", pnome);
		printf("Salário: %.2f\n",*psalario);
		printf("Oliquota : %% %.2f (insento)\n", *poliquota);
		printf("Valor a ser reduzido: %.2f\n", *psalario**poliquota);
		printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");

	}
	else
		if (2826.65 >= *psalario)
		{
			oliquota = 0.075;
			poliquota = &oliquota;
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			printf("Olá %s!\n", pnome);
			printf("Salário: %.2f\n", *psalario);
			printf("Oliquota : %% %.2f\n", *poliquota * 100);
			printf("Valor a ser reduzido: %.2f\n", *psalario * *poliquota);
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
		}
		else
			if (3751.05 >= *psalario)
			{
				oliquota = 0.15;
				poliquota = &oliquota;
				printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
				printf("Olá %s!\n", pnome);
				printf("Salário: %.2f\n", *psalario);
				printf("Oliquota : %% %.2f\n", *poliquota * 100);
				printf("Valor a ser reduzido: %.2f\n", *psalario * *poliquota);
				printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
			}
			else
				if (4664.68 >= *psalario)
				{
					oliquota = 0.225;
					poliquota = &oliquota;
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
					printf("Olá %s!\n", pnome);
					printf("Salário: %.2f\n", *psalario);
					printf("Oliquota : %% %.2f\n", *poliquota * 100);
					printf("Valor a ser reduzido: %.2f\n", *psalario * *poliquota);
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
				}
				else 
				{
					oliquota = 0.275;
					poliquota = &oliquota;
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
					printf("Olá %s!\n", pnome);
					printf("Salário: %.2f\n", *psalario);
					printf("Oliquota : %% %.2f\n", *poliquota * 100);
					printf("Valor a ser reduzido: %.2f\n", *psalario * *poliquota);
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
				}


		return 0;
}