/*Nesse algoritmo o usuário atribui a ano_nasc o ano em que nasceu. O algoritmo lê o valor de ano_nasc e subtrai com ano_atual
que é 2025. Após isso, divide o resultado por 12 e atribui o valor a variável int meses. Depois disso, imprime o resultado na tela e se encerra. */

#include <stdio.h>

   int main() {
    
    int ano_nasc;    
    int ano_atual = 2025;
    int meses;
    printf("Digite o ano do seu nascimento: \n");
    scanf("%d", &ano_nasc);
    
    meses = (ano_atual - ano_nasc) * 12;
    
    printf("Voce tem %d meses de idade", meses);


    return 0;
}