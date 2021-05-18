#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	//identifica os caracteres em PT-br
	setlocale(LC_ALL, "Portuguese");
<<<<<<< HEAD
	//variaveis do programa
	char nome[30], * pnome;
	float salario, * psalario, oliquota, * poliquota, salarioreduzido;

	printf("Digite seu Nome Completo: ");
	gets_s(nome);//grava nome
=======
	char nome[30], *pnome;
	float salario, *psalario, oliquota, *poliquota, salarioreduzido;

	printf("Digite seu Nome Completo: ");
	gets_s(nome);
>>>>>>> 6090d256b95d66d0709ecf10f914bbc376deb762

	printf("Digite seu salario: ");
	scanf_s("%f", &salario);//grava salario

	//os ponteiros recebendo a variavel
	pnome = nome;
	psalario = &salario;
<<<<<<< HEAD

	// condição para validar em qual oliquota o usuário se enquadra
=======
	

>>>>>>> 6090d256b95d66d0709ecf10f914bbc376deb762
	if (1903.98 >= *psalario)
	{
		oliquota = 0;
		poliquota = &oliquota;
		printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
		printf("Olá %s!\n", pnome);
<<<<<<< HEAD
		printf("Salário: %.2f\n", *psalario);
		printf("Oliquota : %% %.2f (insento)\n", *poliquota);
		printf("Valor a ser reduzido: %.2f\n", *psalario * *poliquota);
=======
		printf("Salário: %.2f\n",*psalario);
		printf("Oliquota : %% %.2f (insento)\n", *poliquota);
		printf("Valor a ser reduzido: %.2f\n", *psalario**poliquota);
>>>>>>> 6090d256b95d66d0709ecf10f914bbc376deb762
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
<<<<<<< HEAD
				else
=======
				else 
>>>>>>> 6090d256b95d66d0709ecf10f914bbc376deb762
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