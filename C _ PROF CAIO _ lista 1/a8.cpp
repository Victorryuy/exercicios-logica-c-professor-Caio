// Faça um programa que recebe a idade de um usuário e utiliza o operador ternário para verificar
//se ele pode votar (idade maior ou igual a 16 anos). Imprima 1 se o usuário pode votar e 0 se não puder.
//


#include<stdio.h>

int main(void){
	
	int idade;
	int capeta;	
	int x = 16;
	
	printf("\nVamos verificar se voce pode votar. Entenda 1 (um) como SIM e 0 (zero) como nao");
	printf("\nQual sua idade? ");
	scanf("%i", &idade);
	
	capeta = idade >= x ? 1 : 0;                 // posso apagar a variavel x = 16, e colocar o 16 no lugar do X dessa linha, possibilidades. 
	
	printf("O resultado eh: %i", capeta);
	
 

	return 0;
	
}
