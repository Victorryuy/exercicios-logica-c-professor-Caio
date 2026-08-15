// faça um programa que calcule a  área de um triângulo.
// fórmula da área de um triângulo: (base * altura) / 2.

#include<stdio.h>

int main(void){
	
	float base;
	float altura;
	float result;
	
	printf("Vamos calcular a area de um triangulo.\n");
	
	printf("Escerava o valor da base do triangulo: ");
	scanf("%f", &base);
	
	printf("Escerava o valor da altura do triangulo: ");
	scanf("%f", &altura);
	
	result = (base * altura) /2;
	
	printf("A area do triangulo eh: %f\n", result);
	
	return 0;
	
}
