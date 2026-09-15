#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	
	int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	
	printf("Insira um valor: ");
	scanf("%d", &n);
	
	bit_64 = n%2;
	res = n/2;
	
	bit_32 = res%2;
	res = res/2;
	
	bit_16 = res%2;
	res = res/2;
	
	bit_8 = res%2;
	res = res/2;
	
	bit_4 = res%2;
	res = res/2;
	
	bit_2 = res%2;
	res = res/2;
	
	
		
	printf("O numero %d em bin: = %d%d%d%d%d%d%d", n, res%2,bit_2,bit_4,bit_8,bit_16,bit_32,bit_64);
	
	
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
	int idade, anos, meses, dias;
	
	
	printf("Digite a idade em dias: ");
	scanf("%d", &idade);
	
	
	anos = (idade / 365);
	meses = (idade % 365) / 30;
	dias = (idade % 365) % 30;
	
	printf(" Idade %d, %d meses, %d dias", anos, meses, dias);

	// Exercicio 7

	float raio, pi, valor_raio, total;
	pi = 3.14159;

	printf("\nDigite o valor do raio(R): ");
	scanf("%f", &raio);

	valor_raio = raio * raio * raio;
	total = (4.0/3) * pi * valor_raio;

	printf("Valor do raio(R): %f", total);

	//Exercicio 8

	int x1, x2, y1, y2, p1, p2;
	float dist;
	
	printf("Insira o valor do par ordenado p1(x1,y1); ");
	scanf("%d", &x1);
	scanf("%d", &y1);
	
	printf("Insira o valor do par ordenado p2(x2,y2); ");
	scanf("%d", &x2);
	scanf("%d", &y2);

	p1 = pow(x2-x1,2);
	p2 = pow(y2-y1,2);
	
	dist = sqrt(p1 + p2);

	printf("A distancia entre P1 e P2 = %f", dist);
	
	
	
	
	return 0;
}


