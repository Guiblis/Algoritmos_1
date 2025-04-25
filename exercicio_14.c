/*O algoritmo recebe duas variáveis do tipo float e cinco variáveis do tipo char, para 
armazena-las após o usuário inserir.*/

#include <stdio.h>

int main(){
 
    float numero_1, numero_2;
    char letra_1, letra_2, letra_3, letra_4, letra_5;

    printf("Digite dois números: \n");
    scanf("%f %f", &numero_1, &numero_2);
    
    printf("Digite cinco letras: \n");
    scanf("%c %c %c %c %c", &letra_1, &letra_2, &letra_3, &letra_4, &letra_5);
    return 0;
}