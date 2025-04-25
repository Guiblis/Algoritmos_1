/*Nesse algoritmo, o usuario insere valores a serem atribuidos para as variaveis float numero_1 e numero_2.
Apos isso, o algoritmo checa para ver se o numero_2 é igual a zero. Se for, imprime erro e se encerra.
Se não, faz a divisão do numero_1 pelo numero_2 e imprime o resultado, bem como o resto. Se a divisão por 2 do resto
não retornar 0, o valor é impar, se sim, é par.*/
#include <stdio.h>

int main() {

    int numero_1, numero_2, divisao, resto;

    printf("Digite o primeiro número inteiro (dividendo): ");
    scanf("%d", &numero_1);

    printf("Digite o segundo número inteiro (divisor): ");
    scanf("%d", &numero_2);


    if (numero_2 == 0) {
        printf("divisor nao pode ser zero.\n");
        return 1;
    }

    divisao = numero_1 / numero_2;
    resto = numero_1 % numero_2;

    printf("Resultado da divisão: %d\n", divisao);
    printf("Resto da divisão: %d", resto);

    if (resto % 2 != 0) {
        printf(", ímpar.\n");
    } else {
        printf(", par.\n");
    }

    return 0;
  } 