//     que verificar se um numero digitado e impar ou par, e pergunta ao usuario se gostaria 
// de digitar mais um numero.

#include<stdio.h> 

int main(void)
{
	int entrada, verifica;
	do
	{
		printf("\nDigite um numero inteiro: \n");
		scanf("%d", &entrada);
		if (entrada % 2 == 0)
			printf("O numero eh par\n");
		else
			printf("o numero eh impar\n");
		printf("\nGostaria de digitar um novo numero?\n"
		"1 = Inserir novo numero\n"
		"-1 = Encerrar programa\n");
		scanf("%d", &verifica);		
	} while (verifica != -1);	
}
