// excalidraw para desenhar estruturas/problemas 

#include<stdio.h>

main(){
	
	int x;
	printf("\nDigite um numero: ");
	scanf("%d", &x);
	if (x < 0)
	    printf("\nSeu numero e negativo");
	else{
	    if(x == 0)
	        printf("%d e zero", x);
	    else
		    printf("%d e positivo", x);
   }
	
	
}
