/*Nesse algoritmo, o usuario insere o valor float valor_float e o codigo converte o numero para inteiro na variavel valor_int.*/

#include <stdio.h>

int main() {
    float valor_float;
    int valor_int;

    printf("Digite um valor com casas decimais (float): ");
    scanf("%f", &valor_float);

    valor_int = (int)valor_float;

    printf("O valor convertido para inteiro é: %d \n", valor_int);

    return 0;
}