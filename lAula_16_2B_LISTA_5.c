#include <stdio.h>
#include <stdlib.h>

//exercicio 1

int main(int argc, char *argv[]) {
	
	int num1 = 0;
	int num2 = 100;
	
	for (num1=0; num1 <= 100; num1++){
		printf("%d\n", num1);
	}
	for (num2 =100; num2 >= 0;  num2--){
		printf("%d\n", num2);
	}

// exercicio 2

    int n, res;
	int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;

	printf("\n""Insira o valor a ser convertido:   ");
	scanf ("%d", &n);

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

	printf ("O numero %d em binario = %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);


    return 0;


}
