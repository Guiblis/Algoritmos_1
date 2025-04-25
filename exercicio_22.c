/*O usuario deve inserir dois valores inteiros para int resistencia_1 e resistencia_2. Apos isso
o algoritmo soma as duas resistencias e imprime o resultado da soma.*/
#include <stdio.h>

int main(){

    int resistencia_1, resistencia_2, resistencia_equivalente;

    printf("Digite o valor da primeira resistencia: \n");
    scanf ("%d", &resistencia_1)
    printf ("Digite o valor da segunda resistencia: \n");
    scanf("%d", &resistencia_2);

    resistencia_equivalente = resistencia_1 + resistencia_2

    printf ("A resistencia equivalente é %d ohms", &resistencia_equivalente)

    return 0;
}