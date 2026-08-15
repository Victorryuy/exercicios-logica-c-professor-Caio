#include<stdio.h>

 int main(void){
	int i = 0;
	int entrada = 1;                                  //caso não tivesse a declaração da variável 1 287 = V, 1 0 = V, 0 0 = F. 
	                              //  errei aqui kkk, (!=) significa diferente de. (=!) significa atribuir à variável o resultado de uma 
    while (entrada != 0)                                                  //negação lógica (!), ou seja, atribuir um valor a entrada em vez de compará-lo com zero                    
	{
		printf("O valor de i eh: %d\n", i);
		i++;
		printf("Voce gostaria de sair do programa?\n"
		"0 - Finalizar prorama\n"
		"1 - Continuar programa\n");
		scanf("%d", &entrada);
    } 
}


