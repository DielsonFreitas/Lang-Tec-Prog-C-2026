#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Exercicio 1
	
	
	int primeiro, segundo, aux;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &primeiro);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", primeiro, segundo);
	
	
	
	// Exercicio 2
	
	
	double valor, notacaoCientifica;
	
	printf("\nDigite o valor: ");
	scanf("%lf", &valor);

	notacaoCientifica = valor * 10;
	
	printf("Valor em notação cientifica: %lf", notacaoCientifica);
	
	
	// Exercicio 3
	
	int num_1, num_2, binario;
	num_2 = 2;
	
	printf("\nDigite um numero: ");
	scanf("%f", &num_1);
	
	
	binario = (num_1 * 10) % num_2;
	
	printf("Valor em binario: %f\n", binario);
	
	
	
	
	return 0;
}
