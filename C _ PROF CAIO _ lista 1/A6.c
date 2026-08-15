//  Escreva um programa para calcular a soma de todos os números de 1 até um número 
// inteiro positivo informado pelo usuário.
// º fórmula da soma dos números entre 1 e n: n(n+1)/2

#include<stdio.h>

int main(void){
	int number;
    int abroba;
	
	printf("\n Escreva um numero inteiro positivo: ");
	scanf("%d", &number);
	
	
	
	abroba = number*(number+1)/2;
	
	printf("O calculo de todos os numeros de 1 ate o numero informado eh:  %i", abroba);
	
	
	return 0;
}
