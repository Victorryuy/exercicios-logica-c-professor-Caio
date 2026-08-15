// VERSÃO SIMPLIFICADA

#include <stdio.h>

int main() {
	
    int nota;

    printf("Digite sua nota de 0 a 100: ");
    scanf("%d", &nota);

    if (nota >= 90) {                   // se a nota for pelo menos 90, é A. Se não for A, mas for pelo menos 80, é B. E assim por diante.
    printf("A");
    } else if (nota >= 80) {
    printf("B");
    } else if (nota >= 70) {
    printf("C");
    } else if (nota >= 60) {
    printf("D");
    } else {
    printf("F");
    }
 
}
