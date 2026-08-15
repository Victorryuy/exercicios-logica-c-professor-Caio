//  Faça um programa que receba um número digitado pelo usuário e utlize o operador térnario
// para verificcar se o número é par ou impar. Imprima 1 se for par e 0 se for ímpar.

#include<stdio.h>

main(){
	
	int val1;
	int compara;
	
	printf("\n Vamos verificar se o numero digitado eh par ou impar. Entenda 1 (um) com PAR e 0 (zero) como IMPAR");
	printf("\n Digite um numero: ");
	scanf("%i", &val1);
	
	compara = val1 % 2 ? 0 : 1;
	
	printf("\n O resultado foi: %i", compara);               // a divisão/resultado poderá ser alterada se trocarmos int por float.
	
	return 0
}
