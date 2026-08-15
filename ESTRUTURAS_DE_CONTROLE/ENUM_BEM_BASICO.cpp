#include<stdio.h>

// enum dia {domingo = 0, segunda = 1, terca = 2, quarta = 3, quinta = 4, sexta = 5, sabado = 6};
// definindo o tipo enum dia
enum dia {domingo, segunda, terca, quarta, quinta, sexta, sabado};

main()
{
	 //criando uma variável do tipo enum dia 
	 enum dia d;
	 printf("Digite um dia da semana (0 a 6): ");
	 //vamos adicionar um inteiro a nossa variável enum
	 scanf("%i", &d);
	 switch(d){
	 	//podemos utilizar os nomes já que estamos utilizando a variável do tipo enum 
	 	case domingo:
	 		printf("Domingo, dia ruim, piora na noite!\n");
	 		break;
	 	case segunda:
	 		printf("Segunda, tem desconto no cinema!\n");
	 		break;
		case terca:
	 		printf("Terca, dia 0 da semana!\n");
	 		break;
		case quarta:
	 		printf("Quarta, dia de jogo de algum campeonato!\n");
	 		break;
		case quinta:
	 		printf("Quinta, amanha e sexta porra!\n");
	 		break;
		case sexta:
	 		printf("Sexta, sextouuuu caralho!\n");
	 		break;
		case sabado:
	 		printf("Sabado, dia de encher o cu de drogas!\n");
	 		break;	
		default:
		printf("Dia invalido\n");	  	 	 	 	
	 }
}
