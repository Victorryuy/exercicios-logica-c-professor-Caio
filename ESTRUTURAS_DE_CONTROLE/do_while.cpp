#include<stdio.h>

 int main(void){
	int i = 0;
	int entrada;                                  
    do                                                                      
	{
		printf("O valor de i eh: %d\n", i);
		i++;
		printf("Voce gostaria de sair do programa?\n"
		"0 - Finalizar prorama\n"
		"1 - Continuar programa\n");
		scanf("%d", &entrada);
	}while (entrada) ;               // ou while(entrada != 0);
}

