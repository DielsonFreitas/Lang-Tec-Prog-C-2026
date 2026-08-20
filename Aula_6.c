#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int a, b, c, maior, maior_temp;
		
	printf("Digite os tres valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	abs(maior_temp);                                                     //retorna o valor absluto sem sinal
	
	maior_temp = ((a+b)+abs(a-b)) / 2; // somente faz a comparação de a e b.
	
	maior = ((maior_temp + c) + abs(maior_temp - c)) / 2; // inclui o valor de c.
	
	printf("O maior entre |%d|%d|%d|: %d",a, b, c, maior);	
	
	
	return 0;
		
	
} 
