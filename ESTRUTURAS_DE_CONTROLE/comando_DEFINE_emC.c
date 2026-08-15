#include<stdio.h>
#define CONST 1         //  o compilador está procurando todas as ocorrências
                        //da palavra CONST no nosso código e está substituindo
						// por 1 antes de gerar o arquivo executável.
						
main(){
	
	int opcao;                   // opcao deve ser do tipo: int char ou enum
	printf("Digite 1 ou 2: ");
	scanf("%d", &opcao);
	switch (opcao){
		case CONST: 
			printf("\nVoce digitou 1. ");
			break;
		case 2:
			printf("\nVoce digitou 2. ");
			break; 
		default:
		    printf("\nVoce nao digitou 1 nem 2.");		
	}	
	
}
