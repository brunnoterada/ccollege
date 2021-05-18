#include <stdio.h>
#include <locale.h>
//Função que realiza a multiplicação com soma
int calc_multiplicacao_usando_soma(int numero1, int numero2) {
	// se o resultado for 0 ele encerrra o loop da soma com multiplicação
	if (numero1 == 0 || numero2 == 0) {
		
		return (0);
	}
	// caso o usuario multiplique por 1 ele retorna o valor o numero 
	else if (numero1 == 1) {
		return numero2;
		
	}
	else {
		//realiza a multiplicação com soma
		return(numero1 + calc_multiplicacao_usando_soma(numero2 - 1, numero1));
	}
}

int main() {
	int res,n1,n2;

	//solicita n2
	printf("Digite o numero para multiplicar: ");
	scanf_s("%d", &n1);

	//solicita n1
	printf("Digite o expoente ");
	scanf_s("%d", &n2);

	//Chamada da função
	res = calc_multiplicacao_usando_soma(n1, n2);
	printf("Resultado: %d", res);
	return 0;
}