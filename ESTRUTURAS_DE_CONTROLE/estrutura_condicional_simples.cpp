#include<stdio.h>

main(){
	
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	if (x % 2 == 0)
		printf("%d eh par.", x);
    else // (x % 2 != 0)
		printf("%d eh impar.", x);
		
}
