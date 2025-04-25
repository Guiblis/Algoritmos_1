/*Nesse algoritmo, é pedido ao usuario que digite a letra o, sendo alocada na variavel char letra.
Apos isso, o algoritmo compara a letra inserida com o caracter "o". Se "letra" corresponder a "o", o algoritmo
imprime a letra "e". Se não, acusa erro de letra incorreta e se encerra.*/

#include <stdio.h>

int main() {

    char letra;

    printf ("Digite o: \n");
    scanf ("%c", &letra);
    if (letra == o){
        printf ("e");
    }
    else {
        printf("Letra incorreta");
    }

    return 0;
}