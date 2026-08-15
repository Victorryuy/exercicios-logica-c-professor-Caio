//  Faça um programa que recebe a nota final de um estudante e utilize o operador 
// ternário para determinar se ele passou ou não. Considere que a nota mínima para
// aprovação é 60. Imprima 1 se o estudante passou e 0 se não passou. 


#include<stdio.h>

int main(void){
	
	float nota;
	int media;
	
	printf("\n Considere 1 (UM) como aprovado e 0 (ZERO) para reprovado.");
	printf("\n De 10 a 100, qual foi a nota final do aluno: ");
	scanf("%f", &nota);
	
	
	media = nota >= 60 ? 1 : 0;
	
	printf("%i", media);
	
	
}
