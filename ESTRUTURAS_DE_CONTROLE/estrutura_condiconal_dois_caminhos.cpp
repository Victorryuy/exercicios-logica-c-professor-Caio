#include<stdio.h>

void main(){
	
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	if (x % 2 == 0){
		printf("%d eh par. \n", x);
	}
	if (x % 2 != 0){
		printf("%d eh impar.\n", x);
	}
	 
	
}
