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
	
	
	double valor;
	
	printf("\nDigite o valor: ");
	scanf("%lf", &valor);
	
	printf("Valor em notação cientifica: %lf", notacaoCientifica);
	
	
	// Exercicio 3
	
	int numero;
	
	printf("\nDigite um numero: ");
	scanf("%f", &numero);
	
	
	for ( int i = 7; i >= 0; i--){
		printf("%d", (numero >> i) & 1);
	}
	
	//Exercicio 4

	float salario, vendas, comissao;

	printf("\nDigite o salario: ");
	scanf("%f", &salario);

	printf("\nTotal de vendas: ");
	scanf("%f", &vendas);

	comissao = salario + (vendas * 0.15);

	printf("Valor a receber: %.2f", comissao);

	//Exercicio 5

	int valor_1, valor_2, valor_3, valor_4;
	float media;
	
	printf("\nDigite quatro valores: ");
	scanf("%d", &valor_1);
	scanf("%d", &valor_2);
	scanf("%d", &valor_3);
	scanf("%d", &valor_4);

	media = (valor_1 + valor_2 + valor_3 + valor_4) / 4;

	printf("A media sera de: %.2f", media);

	// Exercicio 6


	// Exercicio 7

	float raio, pi, valor_raio, total;
	pi = 3.14159;

	printf("\nDigite o valor do raio(R): ");
	scanf("%f", &raio);

	valor_raio = raio * raio * raio;
	total = (4.0/3) * pi * valor_raio;

	printf("Valor do raio(R): %f", total);
	
	
	
	
	
	
	
	return 0;
}


