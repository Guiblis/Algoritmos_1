/*Nesse algoritmo, o usuário insere um numero inteiro, que vai ser alocado na variável numero. Após isso, o algoritmo divide a
variável numero por 2 e insere a condição de sua divisão ser igual a zero (divisão absoluta). Se as condições forem atendidas, o 
algoritmo retorna um printf dizendo que o numero é para. Se não, retorna dizendo que é impar*/

#include <stdio.h>

int main() {
    int numero;

    printf("Bem vindo! Por favor, digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número %d é PAR.\n", numero);
    } else {
        printf("O número %d é ÍMPAR.\n", numero);
    }

    return 0;
}
