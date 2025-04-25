/*O usuario insere o valor float valor_fl, e o codigo retorna o mesmo valor com duas casas decimais.*/

#include <stdio.h>

int main() {
    float valor_fl;
    
    printf("Digite um valor real: ");
    scanf("%f", &valor_fl);

    printf("Você digitou o valor: %.2f\n", valor_fl);

    return 0;
}
