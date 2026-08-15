//faça um programa que solicite um tempo em segundos e converta para horas, minutos e segundos.

#include<stdio.h>


int main(void){
	
	int seg;
	int min;
	int hor;
	int seg_restantes;
	
	printf("\n Digite um valor, que sera convertido em horas, minutos e segundos. ");
	printf("\n Digite o valor: ");
	scanf("%d", &seg);
	
	hor = seg / 3600;
	min = (seg % 3600) / 60;
	seg_restantes = seg % 60;                    // não uso o resto após a vírgula  // Quantas vezes 60 cabe dentro de 5456 e quanto sobra?
	                                                                        // 5456 : 60 = 90,93 ou seja, resto 93
	                                                                        // 60 × 90 = 5400 
	                                                                        // 5456 - 5400 = 56
	                                                                        // Portanto: 5456 % 60 = 56, esse é o resto da divisão.

	printf("\nO valor convertido ficou: %i", hor);
	printf("\nO valor convertido ficou: %i", min);
	printf("\nO valor convertido ficou: %i", seg_restantes);
	
}



