#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
* 
* Quest�o 1
* 
* 
int main() {

	setlocale(LC_ALL, "Portuguese");

	int x, *y;

	printf("Digite um n�mero inteiro: ");
	scanf_s("%d", &x);

	y = &x;

	printf("O endere�o da var�avel x �: %p", x);
	printf("O endere�o da var�avel y �: %p", y);

	return 0;
}
*/
/*
* 
* Quest�o 2
* 
* 
struct Funcionario {

	int matricula;
	float salario;

}; struct Funcionario tecnico;

int main() {

	printf("Digite a matricula do Funcion�rio: ");
	scanf_s("%d", &tecnico.matricula);

	printf("Digite o sal�rio do Funcion�rio: ");
	scanf_s("%f", &tecnico.salario);

	printf("\n\nDADOS DO FUNCIONARIO");

	printf("\nMatricula do Funcin�rio: %d\n", tecnico.matricula);

	printf("\nSalario do Funcin�rio: %.2f\n", tecnico.salario);

	setlocale(LC_ALL, "Portuguese");
	return 0;
}
*/
/*
* 
* Quest�o 3
* 
* 
typedef int RU;
typedef float prova;

struct notasAluno
{
	RU matricula;
	prova nota1;
	prova nota2;

}; typedef struct notasAluno n_aluno;

int main() {
	setlocale(LC_ALL, "Portuguese");

	n_aluno aluno;
	prova media = 0;

	printf("Digite a matricula do Aluno: ");
	scanf_s("%i", &aluno.matricula);
	printf("Digite a primeira nota do Aluno: ");
	scanf_s("%f", &aluno.nota1);
	printf("Digite a segunda nota do Aluno: ");
	scanf_s("%f", &aluno.nota2);
	media = (aluno.nota1 + aluno.nota2) / 2;
	
	printf("Matricula do aluno �:  %i", aluno.matricula);
	printf("M�dia do aluno � %.2f", media);
	return 0;
}
*/
