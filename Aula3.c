#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, area, raioQuadrado;
	
	printf("Insira o valor: \n");
	scanf("%f", &raio);
	
	raioQuadrado = raio*raio;
	area = pi * raioQuadrado;
	
	printf("A Área do circulo de raio %f = %f\n", raio, area);
	
	
	float b1, b2, h, area2;
	
	printf("Insira 1 Valor: \n");
	scanf("%f", &b1);
	printf("Insira 2 Valor: \n");
	scanf("%f", &b2);
	printf("Insira 3 Valor: \n");
	scanf("%f", &h);
	
	area2 = ((b1+b2) * h / 2);
	
	printf("O valor da área do trapézio = %f\n", area2);
	
	return 0;
}
