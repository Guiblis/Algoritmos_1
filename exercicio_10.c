/*Nesse algoritmo eu montei um cardapio com printf e pedi ao usuario para que escolhesse algo do cardapio
baseado no numero que acompanha as opções e alocando o numero na variável opcao. Usando a variável int opção e o switch, montase um case para cada numero do cardapio, correspondente
ao item. O default é para caso o numero inserido nao esteja em nenhum dos cases do switch. */

#include <stdio.h>

int main() {
    
    int opcao;

    printf("Cardapio:\n");
    printf("1. Macarrao\n");
    printf("2. Costeleta\n");
    printf("3. Nuggets\n");
    printf("4. Coca-cola\n");
    printf("5. Energetico\n");

    printf("Digite o numero de sua escolha: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu: Macarrao\n");
            break;
        case 2:
            printf("Você escolheu: Costeleta\n");
            break;
        case 3:
            printf("Você escolheu: Nuggets\n");
            break;
        case 4:
            printf("Você escolheu: Coca-cola\n");
            break;
        case 5:
            printf("Você escolheu: Energetico\n");
            break;
        default:
            printf("Numero invalido. Escolha um numero de 1 a 5.\n");
    }

    return 0;
}