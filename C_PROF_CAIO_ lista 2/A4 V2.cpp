#include <stdio.h>

int main() {
    int nota;

    printf("Digite sua nota de 0 a 100: ");
    scanf("%d", &nota);

    if (nota >= 90 && nota <= 100) {
        printf("A");
    } else if (nota >= 80 && nota <= 89) {        // else if só é executado quando a condição anterior é falsa.
        printf("B");
    } else if (nota >= 70 && nota <= 79) {
        printf("C");
    } else if (nota >= 60 && nota <= 69) {
        printf("D");
    } else if (nota < 60) {
        printf("F");
    }

    return 0;
}
