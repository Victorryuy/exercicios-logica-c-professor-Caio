//  Faça um programa que receba o valor de um produto e utilize o operador ternário
// para aplicar um desconto de 10% caso o valor seja maior que 100. Imprima o valor 
// final do produto após o desconto ser aplicado, se aplicável.

#include<stdio.h>

int main(void){
	
	int prod, desc; 
	
	printf("\n Digite o valor do produto: ");
	scanf("%i", &prod);
	
	desc = prod > 100 ? (prod * 90) / 100 : prod;                     
	
	printf("Valor final: %i", desc);
	
    

}
