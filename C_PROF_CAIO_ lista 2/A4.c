//   E screva um programa que leia um número inteiro representando a nota de um 
// de um aluno e imprima a nota correspondente com base na seguinte escala:
// 
//   90 - 100: 'A'
//   80 - 89: 'B'
//   70 - 79: 'C'
//   60 - 69: 'D'
//   Abaixo de 60: 'F'

#include<stdio.h>

int main(){ 

    int nota;
    
    printf("Digite sua nota de 0 a 100: ");
    scanf("%i", &nota);
    
    if (nota >= 90){
    	printf("A");
	} 
	if (nota >= 80 && nota <= 89){             // Para verificar se a nota está entre 80 e 89, use o operador && (E lógico):
    	printf("B");
	} 
	if (nota >= 70 && nota <= 79){
    	printf("C");
	} 
	if (nota >= 60 && nota <= 69){
    	printf("D");
	} 
	if (nota < 60){
    	printf("F");
	} 
	
   
   


}
