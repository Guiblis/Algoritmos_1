/*Nesse algoritmo, o usuário informa 4 numero inteiros, numero_1, numero_2, numero_3 e numero_4 respectivamente.
Após isso, o algoritmo soma numero_1 e numero_2 juntos e numero_3 e numero_4, dividindo a soma das duas primeiras variáveis
pela soma das duas ultimas variáveis.*/

#include <stdio.h>

int main() {

    float numero_1, numero_2, numero_3, numero_4, resultado;

    printf ("Bem vindo! Por favor, digite o primeiro numero: \n");
    scanf ("%d", &numero_1);
    printf ("Agora digite o segundo numero: \n");
    scanf ("%d", &numero_2);
    printf ("Digite o terceiro numero: \n");
    scanf ("%d", &numero_3);
    printf ("Por ultimo, o quarto numero: \n");
    scanf ("%d", &numero_4);

    resultado = ((numero_1 + numero_2)/(numero_3 + numero_4));
    
    printf ("O resultado é: %f", resultado);
    return 0;
}