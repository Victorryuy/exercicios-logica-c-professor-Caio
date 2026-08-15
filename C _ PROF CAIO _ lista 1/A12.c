//   Faça um programa que recebe um número e utilze o operador ternário para
// classificá-lo como positivo, negativo ou zero. Imprima 1 para positivo, -1 para 
// negativo e 0 para zero.

#include<stdio.h>

int main(void){
	
	int number, capeta;
	
	printf("\nEntenda 1 para positivo, -1 para negativo e 0 para zero.");
	printf("\nEscreva um numero inteiro: ");
	scanf("%i", &number);
	
	capeta = number > 0 ? 1 : (number < 0 ? -1 : 0);       // ternário dentro do ternário
	 
	printf("%i", capeta); 
	
	return 0;
	
}

// number = 0; igual    0
// number < 0; menor   -1
// number > 0; maior    1
	

//	if (number == 0) {                      // x = 0 é atribuição e, x == 0 é comparação
//	printf("\nO numero eh: 0");		
//	};
