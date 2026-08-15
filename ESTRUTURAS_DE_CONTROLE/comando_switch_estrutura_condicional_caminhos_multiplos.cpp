 #include<stdio.h>

main(){
	
	int opcao;                   // opcao deve ser do tipo: int char ou enum
	printf("Digite 1 ou 2: ");
	scanf("%d", &opcao);
	switch (opcao){
		case 1:
			printf("\nVoce digitou 1. ");
			break;
		case 2:
			printf("\nVoce digitou 2. ");
			break;
		default:
		    printf("\nVoce nao digitou 1 nem 2.");		
	}	
	
}
