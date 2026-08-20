#include <stdio.h>
#include <stdlib.h>

int main(){

    //Exercicio 1


    float idade, ano_atual, ano_nascimento;

    ano_atual = 2026;

    printf("Digite sua idade: ");
    scanf("%f", &idade);

    ano_nascimento = ano_atual - idade;

    printf("Seu ano de nascimento: %.f", ano_nascimento);

    //Exercicio 2

    double metros, velocidade;

    printf("\nInforme a velocidade: ");
    scanf("%\lf", &velocidade);

    metros = velocidade/3.6;

    printf("Valor em metros por segundo: %lf", metros);

    //Exercicio 3

    float real, dolar, conversao;
    dolar = 5.50;

    printf("\nValor em real: ");
    scanf("%f", &real);

    conversao = real * dolar;

    printf("Valor em USD: %.2f", conversao);


    //Exercicio 4

    float C, F;

    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C*(9.0/5.0)+32.0;

    printf("Temperatura Fahrenheit: %.2f",F);

    //Exercicio 5

    double G, R, pi;

    pi = 3.141592;

    printf("\nValor do Angulo: ");
    scanf("%lf", &G);

    R = G * (pi / 180);

    printf("Valor em graus convertido em radianos: %lf", R);


    // Exercicio 6

    int num;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nSucessor: %d", num + 1);
    printf("\nAntecessor: %d", num - 1);

    //Exercicio 7

    double premio, primeiro, segundo, terceiro;

    premio = 780.00000;

    primeiro = (premio * 46) / 100;
    segundo = ((premio - primeiro) * 32) / 100;
    terceiro = (primeiro + segundo) - premio;

    printf("\nPrimeiro ganhador ira receber: %lf\n", primeiro);
    printf("\nSegundo ganhador ira receber: %lf\n", segundo);
    printf("\nTerceiro ganhador ira receber: %lf\n", terceiro);

    //Exercicio 8



    //Exercicio 9

    float tempo, distancia, litros;
    int Velocidade;

    printf("\nDigite o tempo da viagem: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade do veiculo: ");
    scanf("%d", &Velocidade);

    distancia = tempo * Velocidade;
    litros = distancia / 12.0;

    printf("A quantidade de litros sera de: %.3f", litros);


    //Exercicio 10

    int a, b, c, maior, maior_temp;
		
	printf("Digite os tres valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	abs(maior_temp);                                                     //retorna o valor absluto sem sinal
	
	maior_temp = ((a+b)+abs(a-b)) / 2; // somente faz a comparação de a e b.
	
	maior = ((maior_temp + c) + abs(maior_temp - c)) / 2; // inclui o valor de c.
	
	printf("O maior entre |%d|%d|%d|: %d",a, b, c, maior);	
	
	
	return 0;
}
