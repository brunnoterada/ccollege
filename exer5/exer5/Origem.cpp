#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	FILE* arquivo;
	errno_t err;
	int idade, telefone;
	char c, email[20], nome[30];

	//abre o arquivo csv
	err = fopen_s(&arquivo, "2600243.csv", "w");

	if (err == 0) {
		printf("Arquivo  foi aberto\n");

	}
	else
	{
		printf("Arquivo não foi aberto\n");
	}
	fprintf(arquivo, "nome;email;idade;telefone;\n");
	//loop para salvar os registros no csv
	for (int i = 0; i < 6; i++)
	{
		printf("Digite seu Nome Completo: ");
		gets_s(nome);
		fflush(stdin);
		printf("Digite seu Email: ");
		gets_s(email);
		fflush(stdin);
		printf("Digite sua Idade: ");
		scanf_s("%d", &idade);
		printf("Digite seu Telefone: ");
		scanf_s("%d", &telefone);

		//salva as variaveis nos campos
		while ((c = getchar()) != '\n' && c != EOF) {}
		fprintf(arquivo, "%s;%s;%d;%d\n", nome, email, idade, telefone);
	}

	//fecha o arquivo
	if (arquivo) {
		err = fclose(arquivo);
		if (err == 0) {
			printf("Arquivo fechado!\n\n");

		}
		else
		{
			printf("Arquivo não foi fechado\n\n");
		}
	}

	return 0;

}