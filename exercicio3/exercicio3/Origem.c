#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//define o sair como função de saida 
#define SAIR exit(1)

//função que soma as matrizes 
void calc_soma(int mat_A[4][4], int mat_B[4][4], int mat_C[4][4]) {

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			mat_C[i][j] = mat_A[i][j] + mat_B[i][j];
		}
	}

};

int main() {

	//variavel das matrizes
	
	int m1[4][4];
	int m2[4][4];
	int resultado[4][4];


	int i;
	int j;

	printf("Digite suas matrizes\n\n");
	//números da matriz 1
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite matriz 1[%d][%d]", i, j);
			scanf_s("%d", &m1[i][j]);
			if (m1[i][j] < 0)
				SAIR;
		}
	}
	//números da matriz 2
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("Digite matriz 2[%d][%d]", i, j);
			scanf_s("%d", &m2[i][j]);
			if (m2[i][j] < 0)
				SAIR;
		}
	}
	//chama a função para somar as matrizes
	calc_soma(m1, m2, resultado);

	//mostra o resultado da soma das matrizes
	printf("\nMostrar a soma das matrizes\n\n");
	for (i = 0; i < 4; i++) {
		printf("\n");
		for (j = 0; j < 4; j++) {
			printf(" %d", resultado[i][j]);
		}
	}
	printf("\n");

	system("pause");


	return 0;

}