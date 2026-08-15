#include<stdio.h> 

int main(void)
{
	int entrada;
	while (1) 
	{
		printf("\nDigite um numero inteiro positivo para ver se eh par ou impar\n"
		       "Ou -1 para sair do programa: \n");
		scanf("%d", &entrada);
		if (entrada == -1)
			break; 
		if (entrada < 0)
			continue;                                           
		if (entrada % 2 == 0)
	 		printf("\n%d eh par\n", entrada);
		else
			printf("\n%d eh impar\n", entrada);	
	} 	
}
