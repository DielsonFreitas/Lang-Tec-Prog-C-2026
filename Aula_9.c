#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	
	int resposta;
	printf("Qual exercicio quer resolver |2|3|8| ?: ");
	scanf("%d", &resposta);
	
	switch(resposta){
	
	case 2:
		;
		//Faça um programa que leia um valor em reais e a cotação em dólar. Em seguida, imprima o valor correspondente em dolares.
		
		float dolar, real, cotacao;
		scanf("%f", &real);
		scanf("%f", &cotacao);
		
		printf("%f reais sao %f dolar", real, (real/cotacao));
	break;
		
	case 3:
		;
		//Leia um valor que represente uma temperatura em grau Celsius e apresente-a convertida em graus Fahrenheit,
		
		float tempC, tempF;
		scanf("%f", &tempC);
		tempF = tempC * (9.0/5.0) + 32.0;
		
		printf("A temperatura em Fahrenheit %f graus", tempF);
	break;
		
	case 8:
		;
		//Leia um valor inteiro , que é o tempo de duração em segundos de um determinadoevento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.
		
		int segundos, horas, minutos;
		scanf("%f", &segundos);
		
		horas = segundos / 3600;
		minutos = (segundos - (horas * 3600)) / 60;
		segundos = segundos - ((horas * 3600) + (minutos * 60));
		
		printf("Tempo %d:%d:%d", horas, minutos, segundos);
	break;
	
	} 
	return 0;
}
