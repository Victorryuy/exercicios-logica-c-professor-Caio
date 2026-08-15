//   Faça um programa que calcule a média de N números informados pelo usuário até ele 
// informar o número 0. Por exemplo, se o usuário informar os números 9 6 2 8 0, o programaa
// deve calcular a média (9+6+2+8)/4.

#include <stdio.h>

int main() {

    int n;
    int soma = 0;
    int quantidade = 0;
    float media;

    printf("Digite um numero (0 para parar): ");
    scanf("%d", &n);

    while (n != 0) {

        soma = soma + n;
        quantidade++;

        printf("Digite outro numero (0 para parar): ");
        scanf("%d", &n);
    }

    if (quantidade > 0) {
        media = (float)soma / quantidade;

        printf("A media dos numeros e: %.2f\n", media);
    } else {
        printf("Nenhum numero foi informado.\n");
    }

    return 0;
}

