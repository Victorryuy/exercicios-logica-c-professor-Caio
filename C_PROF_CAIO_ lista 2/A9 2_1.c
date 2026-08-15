//   Faça um programa que calcule o mínimo múltiplo comum (MMC) de dois inteiros 
//a. Encontre o MDC (Máximo divisor comum), o maior número que divide ambos os números inseridos. 
//b. Calcule o MMC (Minimo múltiplo comum), multiplicando os dois números inteiros e dividindo-os pelo MDC encontrado.
//    MMC = |a x b|/MDC.


#include <stdio.h>

int main() {

    int a, b, resto;
    int mdc, mmc;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int num1 = a;
    int num2 = b;

    // Calculando o MDC
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    mdc = a;

    // Calculando o MMC
    mmc = (num1 * num2) / mdc;

    printf("MDC: %d\n", mdc);
    printf("MMC: %d\n", mmc);

    return 0;
}




