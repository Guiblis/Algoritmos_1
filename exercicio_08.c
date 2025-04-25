/*Nesse algoritmo, o usuario vai inserir seu nome (com até 25 caracteres), sua idade (numero inteiro), seu genero (Masculino ou Feminino)
e sua altura em decimal. Apos isso, o algoritmo vai alocar cada informação em sua devida variavel, seja array de char, int ou float. No final
ele imprime as informações no final de acordo com a ordem que foi pedida no começo.*/

#include <stdio.h>
int main() {
    int idade;
    char nome[25], genero[10];
    float altura;

    printf("Bem vindo! Para comecar, por favor digite seu nome:\n");
    scanf("%24s", nome);

    printf("Agora digite sua idade:\n");
    scanf("%d", &idade);

    printf("Agora digite seu genero (Masculino ou Feminino):\n");
    scanf("%9s", genero);

    printf("Por ultimo, digite sua altura (em metros, como por exemplo 1.73):\n");
    scanf("%f", &altura);

    printf("Seu nome é %s, você tem %d anos de idade, seu genero é %s e sua altura é %.2f metros.\n", nome, idade, genero, altura);

    return 0;
}