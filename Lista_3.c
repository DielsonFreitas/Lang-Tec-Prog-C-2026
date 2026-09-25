#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


int main(){
	
	/*Crie um conversor de temperatura entre Celsius (C) e Fahrenheit (F), que verifique qual é a grandeza de entrada e realize a conversão correta.
 	Solicite uma temperatura de entrada e identifique a grandeza;
	Com uma entrada em Celsius, deve-se calcular o valor em Fahrenheit;
	Com uma entrada em Fahrenheit, deve-se calcular o valor em Celsius;
	Mostre na tela o resultado da conversão.*/
	
	 
        
        float temperatura, celsius, fahrenheit;
        
        printf("Temperatura: ");
        scanf("%f", &temperatura);
        
        celsius = ( temperatura * 9/5) + 32;
        fahrenheit = (celsius - 32) * 5/9;
        
        printf("\nTemperatura Celsius em Fahrenheit: %.2f graus.", celsius);
        printf("\nTemperatura Fahrenheit em Celsius: %.2f graus.", fahrenheit);
        
        return 0;
}	
        
    


	
	/*Construa um programa que receba o nome de um aluno e três notas, calculando a média e a situação final.
	Solicite 3 notas de entrada;
	Calcule a média e verifique o critério de aprovação;
	Mostre o resultado final formatado.*/
	
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	char aluno[20];
	float nota1, nota2, nota3, media;
	
	
	printf("Insira seu nome: ");
	scanf("%s", aluno);
	
	printf("Digite a 1 nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a 2 nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a 3 nota: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3.0;
	
	if (media >= 70.0 && media <= 100){
		
		SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        printf("Aluno Aprovado!\n");
	
	}else if ( media >= 40.0 && media <= 60.9){
		
		SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		printf("Aluno de Recuperacao!");
	
	}else{
		
		SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
        printf("Aluno Reprovado!\n");
	}
	

    /*Crie um simulador de saque que calcule a menor quantidade possÃ­vel de notas para um valor total.
    Notas: R$ 100, R$ 50, R$ 10, R$ 5, R$ 2 e R$ 1.
    Exiba o resumo da contagem de cada nota entregue.*/

    int notas;
    float saque;

    printf("Digite o valor do saque R$: ");
    scanf("%f", &saque);

    notas = saque;

    printf("Valor do saque R$: %.2f\n", saque);

    printf("\n===== Impressao das cedulas =====\n");

    printf("\n%d - nota(s) de R$: 100,00\n", notas / 100);
    notas %= 100;

    printf("\n%d - nota(s) de R$: 50,00\n", notas / 50);
    notas %= 50;

    printf("\n%d - nota(s) de R$: 10,00\n", notas / 10);
    notas %= 10;

    printf("\n%d - nota(s) de R$: 5,00\n", notas / 5);
    notas %= 5;

    printf("\n%d - nota(s) de R$: 2,00\n", notas / 2);
    notas %= 2;

    printf("\n%d - nota(s) de R$: 1,00\n", notas / 1);
    notas %= 1;

    printf("\n===== Obrigado pela Preferencia =====");


    return 0;

}
