#include <stdio.h>
#include <stdlib.h>



// vetores sao estruturas de dados unicos


//faça um programa que LEIA 10 valores do teclado, e mostre na tela o maior entre os 5 primeiros e o menor entre os 5 restantes.

	int maior_comp (int a, int b){
		if (a > b) return a;
		else return b;
	}

int main(int argc, char *argv[]) {
	
	int valor[10];
	int i, maior, menor ;
	
	printf("Leia os numeros: ");
	// Estrutura laço for : para (inicial, condição, incremento)
	
	for (i = 0; i < 10; i++){
		scanf("%d",&valor[i]);
		
	}
	
	for (i = 9; i > 0; i--){
		printf("|%d|", valor[i]);
	}
	
	for (i=1;maior=valor[0]; i<5;i=i+2){
		int comp_temp = maior_comp(valor[i], valor[i+1]);
		maior = maior_comp(maior, comp_temp);
	}
	
	printf("%d", maior);
	return 0;
}
