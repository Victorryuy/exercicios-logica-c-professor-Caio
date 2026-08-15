//   Faça um programa que peça para o usuário digitar um número entre 2 e 10
// e informe se ele é primo ou não utilizando comando switch. 

#include<stdio.h>


int main(){
	
	int n1; 
	printf("\n VAMOS VERIFICAR SE O NUMERO EH PRIMO OU NAO");
	printf("\n DIGITE UM NUMERO ENTRE 2 E 10: ");
	scanf("%d", &n1);
	
	switch(n1){
		case 2:
		case 3:
	    case 5:
		case 7:
			printf("\n O numero eh primo.");
			break;
			
		case 4:
		case 6:
		case 8:
		case 9:
		case 10:
			printf("\n O numero nao eh primo.");
			break;
		
		default:
			printf("\n numero fora da lista pedida");									
	}
	return 0;
}
