/*Nesse algoritmo o usuario atribui valores para as variaveis numero_1 e numero_2 e o algoritmo retorna a variável resultado
somando numero_1 e numero_2, imprimindo na tela.*/

#include <stdio.h>

int main (){

int numero_1, numero_2, resultado;

 printf ("Bem-vindo! Por favor digite o primeiro numero inteiro: \n");
 scanf ("%d", &numero_1);
 printf ("Agora digite o segundo numero inteiro: \n");
 scanf ("%d", &numero_2);
 
 resultado = (numero_1 + numero_2);

 printf ("Resultado: %d", resultado);

    return 0;
}