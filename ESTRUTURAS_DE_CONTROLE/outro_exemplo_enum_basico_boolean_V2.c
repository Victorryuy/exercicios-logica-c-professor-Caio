#include <stdio.h>
// criando o tipo enum booleano
enum boolean {false, true = 20};
       
int main(void){
	//criando uma variável do tipo enum booleano
	enum boolean bl = true;
	printf("%d vamos verificar se eh 0 mesmo!", bl);
	if (bl == true) 
	    printf("\nPrimeira comparacao bem sucedida!");
	if (bl == 20)
	    printf("\nSegunda comparacao bem sucedida!");
	    
	return 0;
	 
/* quando o usuario esta digitando nós devemos receber um tipo inteiro
quando nós formos atribuir um valor a uma variavel do tipo enum, nós podemos utilizar
um valor inteiro, ou uma palavra que faça parte do tipo que criamos
que vai ser convertida para um inteiro */
  
// NÃO VAI RODAR SE ESTIVER SALVO EM .cpp que é c++, tem que salvar em .c	    
}

