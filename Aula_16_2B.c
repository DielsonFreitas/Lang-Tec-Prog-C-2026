#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num1 = 0;
	int num2 = 100;
	
	for (num1=0; num1 <= 100; num1++){
		printf("%d\n", num1);
	}
	for (num2 =100; num2 >= 0;  num2--){
		printf("%d\n", num2);
	}
	
	return 0;
}
