//   Faça um programa que leia um inteiro inserido pelo usuário, e imprima "Positivo" se o número for 
// maior que zero, "Negativo" se for menor que zero.

#include<stdio.h>

int main(){
	
	int n1;
	
	printf("\nVamos verificar se o numero eh positivo ou negativo, escreva um numero: ");
	scanf("%i", &n1);
	
   if (n1 >= 0) 
		printf("\nO numero %d eh positivo.", n1);
   if (n1 < 0)
        printf("\nO numero %d eh negativo.", n1);
	
	
	
}
