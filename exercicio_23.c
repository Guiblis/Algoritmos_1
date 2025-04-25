/*Nesse algoritmo, o usuario preenche as variaveis termos_sequencia com o numero de termos que a sequencia de Fibonacci
que ele quer. O algoritmo assim começa com o numero_inteiro sendo igual a zero, representando o primeiro valor da sequencia.
Para o segundo valor, ele checa se o numero_inteiro é menor que os termos da sequencia. Se sim, ele adiciona mais um ao numero_inteiro.*/

#include <stdio.h>

int main() {
    int termos_sequencia, numero_inteiro;
    int primeiro = 0, segundo = 1, proximo;

    printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &termos_sequencia);

    if (termos_sequencia <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1;
    }

    printf("Sequência de Fibonacci com %d termos:\n", termos_sequencia);

    for (numero_inteiro = 0; numero_inteiro < termos_sequencia; numero_inteiro++) {
        if (numero_inteiro == 0) {
            printf("%d ", primeiro);
        } else if (numero_inteiro == 1) {
            printf("%d ", segundo);
        } else {
            proximo = primeiro + segundo;
            printf("%d ", proximo);
            primeiro = segundo;
            segundo = proximo;
        }
    }

    printf("\n");
    return 0;
}