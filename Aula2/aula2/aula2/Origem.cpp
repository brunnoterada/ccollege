#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
#define QTE 4
#define SAIR exit(1)


int main() {
	int* px;

	px = (int*)calloc(QTE, sizeof(int));

	if (px == NULL) {
		printf("ERRO! Não tem memória suficiente");
		SAIR;
	}

	int i;

	printf("GIDITAR OS DADOS PARA O VETOR DE 4 POSICOES\n\n");
	for (i = 0; i < 4; i++) {
		printf("Digite px[%d]", i);
		scanf_s("%d", &px[i]);
	}
	printf("\nMOSTRAR OS DADOS DO VETOR\n\n");
	for(i=0; i<4; i++){
		printf("Posicoes px[%d]  tem o valor de - %d\n", i, px[i]);
	}
	printf("\n");

	free(px);

	system("pause");

	return 0;

}
*/
int imprimeN(int inicio, int fim);

int main() {
	int comeco, sfim, i;

	comeco = 1;
	sfim = 21;

	printf("Funcao	recursiva");
	imprimeN(comeco, sfim);

	printf("\n\n");

	printf("funcao interativa ");
	for (i = comeco; i < sfim;i++) {
		printf("%d\n", i);
	}

	printf("\n\n");

	printf("funcao while");

	while (comeco < sfim)
	{
		printf("%d\n", comeco);
		comeco++;
	}


	printf("\n\n");
	system("pause");
	return 0;
}

int imprimeN(int comeco, int sfim) {
	if (comeco < sfim) {
		printf("%d", comeco);
		imprimeN(comeco + 1, sfim);

	}
}