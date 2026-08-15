#include<stdio.h>

main(){
	
	char opcao;                   // opcao deve ser do tipo: int char ou enum
	printf("Digite A ou B: ");
	scanf("%c", &opcao);
	switch (opcao){
		case 'a':
			printf("\nVoce digitou A. ");
			break;
		case 'b':
			printf("\nVoce digitou B. ");
			break;
		default:
		    printf("\nVoce nao digitou A nem B.");		
	}	
	
}
