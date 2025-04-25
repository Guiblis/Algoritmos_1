/*Nesse algoritmos, o usuario atribui tres valores, para l1, l2 e l3, respectivamente. Apos a declaracao dos valores, o algoritmo verifica se os 
valores formam um triangulo. Se nao formarem um triangulo, o codigo retorna um texto ao usuario informando que os valores não formam um triângulo. Se os valores de l1, l2 e l3
formarem um triangulo, o algoritmo classifica-o em equilatero, isosceles ou escaleno.*/
#include <stdio.h>
 
int main() {
    float l1, l2, l3;
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &l1);

    printf("Digite o valor do segundo lado: ");
    scanf("%f", &l2);

    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &l3);

    if (l1 < l2 + l3 && l2 < l1 + l3 && l3 < l1 + l2) {
        printf("E um triangulo ");
        if (l1 == l2 && l2 == l3) {
            printf("equilatero.\n");
        } else if (l1 == l2 || l1 == l3 || l2 == l3) {
            printf("isosceles.\n");
        } else {
            printf("escaleno.\n");
        }
    } else {
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}