/*O algoritmo é composto por tres variaves int, que servem para alocar os numeros inteiros inseridos
pelo usuario. A variavel float serve para realizar a operação de media entre as variaveis numero_1, numero_2 e numero_3.
Apos isso, o algoritmo imprime na tela o resultado da operação.*/

#include <stdio.h>

int main() {

int numero_1, numero_2, numero_3;
float media;

printf ("Digite o primeiro numero inteiro: \n");
scanf ("%d", &numero_1);
printf ("Digite o segundo numero inteiro: \n");
scanf ("%d", &numero_2);
printf ("Digite o terceiro numero inteiro: \n");
scanf ("%d", &numero_3);

media = (numero_1 + numero_2 + numero_3)/3;

printf ("A média é %.2f", media);

return 0;
}