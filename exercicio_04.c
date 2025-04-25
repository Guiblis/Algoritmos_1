/*Nesse algoitmo, é pedido ao usuario que escreva um ano inicial (ano1) e um final (ano2), cumprindo a condição que o primeiro ano 
inserido seja menor que o segundo. Caso o usuario nao cumpra essa condição, o algoritmo imprime erro e se encerra.
 Caso ele cumpra, o algoritmo vai adicionando +1 ao ano1 até que ele chegue ao ano2. 
Para cada ano divisivel por quatro não divisivel por 100 ou divisivel por 400, esse numero é impresso na tela.*/

#include <stdio.h> 
int main(){
    int ano1, ano2;
    printf ("Bem vindo ao contador de anos bissextos! Digite o ano de começo (menor): \n");
    scanf ("%d", &ano1);
    printf ("Digite o ano final (maior): \n");
    scanf ("%d", &ano2);

    if (ano1 >= ano2) {
        printf("Erro: o ano inicial deve ser menor que o ano final.\n");
            return 1;
        }
    
        printf("Anos bissextos entre %d e %d:\n", ano1, ano2);

        for (int ano = ano1; ano <= ano2; ano++) {
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                printf("%d\n", ano);
            }
        }
    
        return 0;
    }