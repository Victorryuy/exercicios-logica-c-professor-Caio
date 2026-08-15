//     criar um programa que verificar se o numero é par ou impar, quando ele for positivo
// e que interrompe a execução se o numero digitado for negativo

#include<stdio.h> 

int main(void)
{
	int entrada;
	do 
	{
		printf("\nDigite um numero inteiro positivo para ver se eh par ou impar\n"
		       "Ou um numero negativo para sair do programa: \n");
		scanf("%d", &entrada);
		if (entrada < 0)
			break;                                             // break interrompe: estruturas iterativas e as estutura condicional switch case
		if (entrada % 2 == 0)
	 		printf("\n%d eh par\n", entrada);
		else
			printf("\n%d eh impar\n", entrada);	
	} while (1);	
}


