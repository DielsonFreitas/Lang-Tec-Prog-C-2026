#include <stdio.h>
#include <stdlib.h>



//bloco de codigo reutializavelpor todo o programa, recebe dois valores inteiros para realizar o calculo

int calculo_maior(int a, int b){
	return ((a+b+(abs((a-b))))/2);
	
}


int main(int argc, char *argv[]) {
	
	int vet[10];
	int i, maior;
	
	
	
	for (i=0 ; i<10 ; i++){
		scanf("%d", &vet[i]);
	}
	
	// inicializaçõo, verificação, incremento
	for (i = 1, maior = vet[0]; i < 10; i++){
		maior = calculo_maior(maior,vet[i]);
		
	}	
	
	printf("%d eh o maior: ", maior);
	
	
	return 0;
}
