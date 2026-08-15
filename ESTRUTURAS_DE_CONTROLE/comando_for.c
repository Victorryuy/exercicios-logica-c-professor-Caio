#include<stdio.h>

int main()
{
    // CONTADOR
    // 1.contador é a variavel que contra a quantidade de iterações
    // 2.pode ser indicada mais de uma variavel
    // 3.quase sempre a variavel vai ser do tipo ordinal (int, char, enum)
    // 4.declarar uma variavel dentro de um estrutura, seja como contador, ou nas sentenças
    // faz com que essa variavel so exista durante a execução dessa estrutura
    // Condição
    // 1.Em geral é aplicada sobre a variavel do contador
    // 2.Operacoes se encerram quando a consução for falsa (zero)
    // 3.E se nenhum condição for deinida, a estrutura funciona como um laco infinito
    // Sendo necessario medidas de controle dentro das sentenças subordinadas
    // SALTO
    // 1. Determina quanto o valor da variavel vai aumentar
    // 2. Se o salto não for definido também precisaremos de uma medida de controle
    // 3. Se houver mais de uma variavel contadora, então pode haver mais de uma expressão
    // de salto

    for (int i = 0; i < 10; i++)
    {
        printf("O valor de i eh %d\n", i);
    }
    
    return 0;
}

