#include<stdio.h>

main(){
	
	int x;
	printf("\nDigite um numero: ");
	scanf("%d", &x);
	if (x < 0)
	    printf("\nSeu numero e negativo");
	else if(x == 0)                            // se comporta como uma só instruçõa
	    printf("%d e zero", x);
	else
	    printf("%d e positivo", x);
	
}
