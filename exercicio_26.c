/*O algoritmo pede ao usuario que insira dois valores inteiros para atribuir as variaveis numero_1 e numero_2.
Apos isso, o algoritmo soma as duas variaveis e checa se o valor é maior ou igual a 10. Se sim, ele imprime o texto
dizendo que a soma é maior ou igual a 10. Se não, imprime o texto dizendo que a soma é menor que 10.*/
#include <stdio.h>

int main() {
    int numero_1, numero_2, soma;


    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero_1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero_2);

    soma = numero_1 + numero_2;

    if (soma >= 10) {
        printf("A soma dos números é %d e é maior ou igual a 10.\n", soma);
    } else {
        printf("A soma dos números é %d e é menor que 10.\n", soma);
    }

    return 0;
}
