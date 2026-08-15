//   escreva um programa qu leia um número inteiro do usuário (de 1 a 7) e imprima o dia
// da semana semana correspondente (1 para segunda-feira, 2 para terça-feira etc.). Se a entrada
// não estiver entre 1 e 7, imprima "Dia inválido".

#include<stdio.h>

main(){
	
	enum dia {domingo, segunda, terca, quarta, quinta, sexta, sabado};
	 
	 enum dia d;
	 printf("Digite um dia da semana (0 a 6): ");
	 scanf("%i", &d);
	 switch(d){
	 	case domingo:
	 		printf("Domingo\n");
	 		break;
	 	case segunda:
	 		printf("Segunda-Feira\n");
	 		break;
		case terca:
	 		printf("Terca-Feira\n");
	 		break;
		case quarta:
	 		printf("Quarta-Feira\n");
	 		break;
		case quinta:
	 		printf("Quinta-Feira\n");
	 		break;
		case sexta:
	 		printf("Sexta-Feira\n");
	 		break;
		case sabado:
	 		printf("Sabado\n");
	 		break;	
		default:
		printf("Dia invalido\n");	  	 	 	 	
	 }
}
