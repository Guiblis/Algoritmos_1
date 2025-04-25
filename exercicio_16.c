/*Nesse algoritmo, o usuario insere tres valores float para alocar nas variaveis comprimento,
largura e altura, respectivamente. A comanda do algoritmo não pede uma conta nem um printf dos valores.*/

#include <stdio.h>

int main() {
    
    float comprimento, largura, altura;

    printf("Digite o comprimento (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura (em metros): ");
    scanf("%f", &largura);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    return 0;
}
