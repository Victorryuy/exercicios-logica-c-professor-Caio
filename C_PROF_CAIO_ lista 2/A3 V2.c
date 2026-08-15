#include<stdio.h>

int main() {
    int n1, n2;

    printf("Escreva dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {                              // VERIFICA UMA CONDIÇÃO
        printf("O numero %d eh maior", n1);
    } else if (n2 > n1) {                       // VERIFICA OUTRA CONDIÇÃO SOMENTE SE A ANTERIOR FOR FALSA 
        printf("O numero %d eh maior", n2);
    } else {                                    // EXECUTA QUANDO NENHUMA DAS CONDIÇÕES ANTERIORES É VERDADEIRA
        printf("=");  //O último else representa a igualdade. Se n1 não é maior que n2 e n2 também não é maior que n1, o que sobra? Os dois números são iguais!
    } 

    return 0;
}
