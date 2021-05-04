#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	char nome[30], *pnome;
	float salario, *psalario, oliquota, salarioreduzido;
	
	printf("Digite seu nome: ");
	gets_s(nome);

	printf("Digite seu salario: ");
	scanf_s("%f", &salario);

	pnome = nome;
	psalario = &salario;


	if (1903.98 >= *psalario)
	printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\nOlá %s!\nSeu salário é de R$%.2f \n*Você está insento da Oliquota*\nO valor a ser reduzido do seu salário é de : R$0\nSalário final: R$%.2f\n_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-", pnome, *psalario, *psalario);
	else
		if (2826.65 >= *psalario)
			printf("%.2f teste", salario*0.075);
			

	return 0;
}