#include <stdio.h>
#include <stdlib.h>

/* operação
x se x+1 ou x-1 == y */


int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, n5;
	int pri, seg, ter, quarto, quinto;
	
	printf("Digite cinco numero inteiros: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	if (n1 == (n2+1) || n1 == (n3+1) || n1 == (n4+1) || n1 == (n5+1)){
		pri = n1;
	}
	
	if (n2 == (n3+1) || n2 == (n4+1) || n2 == (n5+1)){
		seg = n2;
	}
	
	if (n3 == (n4+1) || n3 == (n5+1)){
		ter = n3;
	}
	
	if (n4 == (n5+1)){
		quarto = n4;
	}
	
	printf("%d %d %d %d %d", pri, seg, ter,quarto, quinto);
	
	return 0;
}
