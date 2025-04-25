/*Nesse algoritmo o usuário deve inserir um numero inteiro diferente de 0 para a variável numero_1. Esse numero representara o dividendo.
Apoós isso, deve inserir outro numero inteiro diferente de 0 para a variável numero_2. Caso o valor da variavel numero_2 for 0, o algoritmos apresent
erro e se encerra. Caso nao, o algoritmo realiza a divisao e confirma se o resultado e um numero inteiro ou não. Se sim, imprime o resultado
e se encerra. Se não, imprime o erro e se encerra.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero_1, numero_2, resultado;

    printf("Digite o primeiro numero inteiro (numero a ser dividido): ");
    if (scanf("%d", &numero_1) != 1) {
        return 1;
    }

    printf("Digite o segundo numero inteiro (numero que divide): ");
    if (scanf("%d", &numero_2) != 1) {
        return 1;
    }    

    if (numero_2 == 0) {
        printf("A Divisao por zero nao e permitida.\n");
        return 1;
    }

    if (numero_1 % numero_2 != 0) {
        printf ("A divisao dos numeros nao da um numero inteiro.");
        return 1;
    }

    resultado = numero_1 / numero_2;
    printf("Resultado da divisao exata: %d\n", resultado);
    return 0;
}