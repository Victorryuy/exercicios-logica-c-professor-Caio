//faça um programa que calcule aárea e o volume de uma esfera.
// fórmulas: área da esfera: 4 x pi x r^2 (pi vale 3.1415 e r é o raio)
//            volume da esfera: 4 x pi x r^3 /3 (tudo dividido por 3)

// o cálculo está funcionando. Só não sei se os resultados estão realmente certos :) 

#include<stdio.h>

int main(void){
	
	float result;
	float result2;
	
    float raio;
    float volume;
	float pi = 3.1415;
	int A = 4;	
    
    printf("\n Vamos calcular a area e o volume de uma esfera. ");
    
    printf("\n digite o valor do raio da esfera: ");
    scanf("%f", &raio);
    	
    
    result = A * pi * (raio * raio);
    
    result2 = (A * pi * raio * raio * raio) / 3;
    
    printf("\n A area da esfera e: %f", result);
    printf("\n O volume da esfera e: %f", result2);
    
	return 0;
	
	
}



