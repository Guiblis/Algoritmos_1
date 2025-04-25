/*O algoritmo tem seis valores do tipo float. Ao iniciar o algoritmo, o usuário deve inserir valores para
numero_1, numero_2, numero_3. Apos isso, o algoritmo calcula e insere o valor de delta. Com o valor de delta definido, ele usa 
a formula de Bhaskara para conseguir x1 e X2.  */

#include <stdio.h>
#include <math.h>

int main() {
    float numero_1, numero_2, numero_3;
    float delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &numero_1);

    printf("Digite o valor de b: ");
    scanf("%f", &numero_2);

    printf("Digite o valor de c: ");
    scanf("%f", &numero_3);

    if (numero_1 == 0) {
        printf("Não é uma equação do segundo grau.\n");
        return 1;
    }

    delta = (numero_2 * numero_2) - (4 * numero_1 * numero_3);


    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        x1 = - numero_2 / (2 * numero_1);
        printf("Existe uma raiz real: x = %.2f\n", x1);
    } else {
        x1 = (- numero_2 + sqrt(delta)) / (2 * numero_1);
        x2 = (- numero_2 - sqrt(delta)) / (2 * numero_1);
        printf("Existem duas raízes reais:\n");
        printf("x1 = %.2f e x2 = %.2f", x1, x2);
    }

    return 0;
}
