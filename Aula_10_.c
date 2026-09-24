#include <stdio.h>
#include <stdlib.h>



int mult(int digto, int valor){
	return digto*valor;
}



int main(int argc, char *argv[]) {
	
	/*Desenvolva um programa que receba um número de CPF e informe se ele é Válido ou Inválido.
Crie um campo de entrada para os números;
Implemente a lógica de cálculo dos dois dígitos verificadores;
Mostre o resultado final na tela.
Algoritmo de Validação:
1º dígito: Multiplique os 9 primeiros números por uma contagem regressiva de 10 a 2. Some tudo, multiplique por 10 e pegue o resto da divisão por 11.
2º dígito: Repita o processo com os 10 primeiros números, usando pesos de 11 a 2.
Dica: Se o resto da conta for 10, considere o dígito como 0.*/

	int dg1,dg2,dg3,dg4,dg5,dg6,dg7,dg8,dg9,dv,dv2;
	int soma1, resto1, soma2, resto2;

    printf("Digite o CPF: ");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d", &dg1, &dg2, &dg3, &dg4, &dg5, &dg6, &dg7, &dg8, &dg9, &dv, &dv2);


	soma1 = mult(dg1,10)+mult(dg2,9)+mult(dg3,8)+mult(dg4,7)+mult(dg5,6)+mult(dg6,5)+mult(dg7,4)+mult(dg8,3)+mult(dg9,2);
	soma1 *= 10;
	resto1 = soma1 % 11;

	if (resto1 == 10){
        resto1 = 0;
	}


	soma2 = mult(dg1,11)+mult(dg2,10)+mult(dg3,9)+mult(dg4,8)+mult(dg5,7)+mult(dg6,6)+mult(dg7,5)+mult(dg8,4)+mult(dg9,3)+mult(dv,2);
	soma2 *= 10;
	resto2 = soma2 % 11;

	if (resto2 == 10){
        resto2 = 0;
    }

    if (resto1 == dv && resto2 == dv2){
        printf("CPF VALIDO !");
    }else{
        printf(("CPF INVALIDO!"));
    }

		
	return 0;
	
}
	
	
	
	
	





	
	
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





	


