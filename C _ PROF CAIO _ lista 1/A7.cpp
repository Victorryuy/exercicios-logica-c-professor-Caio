// Faça um programa onde o usuário insere dois números. Utilize o operador ternário para 
//determinar e imprimir o menor dos dois números.


#include<stdio.h>

int main(void){
	
	int n1, n2, menor;
	
	printf("\n Digite dois numeros inteiros:");
	scanf("%d %d", &n1, &n2);
	
	menor = n1 < n2 ? n1 : n2;             // sua sintaxe é: condição ? resposta_se_verdadeira : resposta_se_falsa
	
	printf("menor: %d", menor);
	
	return 0;
}
