
/*Nesse algoritmo, e pedido ao usuario que digite tres numeros inteiros, um de cada vez, para alocar nas variáveis
a, b e C. Apos isso, o algoritmo imprime a, b e c na tela, na ordem que o usuario inseriu.*/
#include <stdio.h>
int main (){
    int a, b, c;
    printf ("Digite o primeiro numero inteiro (Ex: 1, 2, 3):\n");
    scanf (" %d", &a);
    printf ("Digite o segundo numero inteiro:\n");
    scanf (" %d", &b);
    printf ("Digite o terceiro e ultimo numero:\n");
    scanf (" %d", &c);
    printf ("%d, %d, %d \n", a, b, c);
    return 0;
}