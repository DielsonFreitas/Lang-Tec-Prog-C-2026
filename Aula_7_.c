#include <stdio.h>
#include <stdlib.h>

//ESTRUTURA CONDICIONAL 

int main(int argc, char *argv[]) {

	
	int a, b, c;
	int resultado;
	
	printf("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		
		resultado = a;
	
	}else{
		
		resultado = b;
	}
	
	if (c > resultado){
		
		resultado = c;
		
	}
	
	
	printf("%d eh o maior. ", resultado);
	
	
	
	// LER UM NÚMERO INTEIRO, SE FOR POSITIVO, INFORMAR O INVERSO. CASO CONTRARIO, INFORMAR O SEU QUADRADO.
	
	int n, r;
	
	printf("Insira o valor: ");
	scanf("%d", &n);
	
	if (n > 0){
		
		r = n * -1; 
		
			
	}else{
		
		r = n * n;
		
	}
	
	printf("%d", r);
	
	
	return 0;
}
