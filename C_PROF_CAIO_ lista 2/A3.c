//   Escreva um programa que leia dois números inteiros do usuário e imrima 
// o maior dos dois. Se ambos forem iguais, imprima o caractere '='.

#include<stdio.h>

int main(){
	
	int n1, n2;
	
	printf("\nEscreva dois numeros inteiros: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 < n2) 
	  printf("\n O numero %d eh maior", n2);
	if (n1 > n2)
	  printf("\n O numero %d eh maior", n1);
	if (n1 == n2)
	  printf("Ambos sao iguais, =");
     		
}
	

