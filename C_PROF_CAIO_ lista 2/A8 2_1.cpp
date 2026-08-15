//   A série de Fibonacci inicia com os números 0 e 1 e os demais termos são definidos pela soma  
// dos dois inteiros. Crie um programa que solicite do usuário a posição de um termo(int) e calcule
// qual é este termo. Fibonacci: 0 1 1 2 3 5 8 13 21... Por exemplo, se o usuário informar 7 (sétimo termo)
//, a resposta é 8.



#include <stdio.h>

int main() {

    int posicao;
    int anterior = 0;
    int atual = 1;
    int proximo;


    printf("Informe a posicao do termo: ");
    scanf("%d", &posicao);

    if (posicao <= 0) {
        printf("Informe uma posicao maior que zero.\n");
    }
    else if (posicao == 1) {
        printf("O termo e: 0\n");
    }
    else if (posicao == 2) {
        printf("O termo e: 1\n");
    }
    else {

        for (int i = 3; i <= posicao; i++) {

            proximo = anterior + atual;

            anterior = atual;
            atual = proximo;
        }

        printf("O termo e: %d\n", atual);
    }

    return 0;
}

