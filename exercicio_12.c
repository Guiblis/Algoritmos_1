/*Nesse algoritmos, o usuário digita um número para definir a quantidade de variáveis dentro do próprio código (int x).
Definido o numero de variavel, o usuário deve inserir caracteres correspondentes ao numero inserido em x. (Se o numero inserido em x for 5, digite 
5 caracteres). Após isso, o algoritmo retorna os valores inseridos.*/

#include <stdio.h>

int main(){

    int x;
    
    printf ("Defina o tamanho da sua variavel: \n");
    scanf("%d", &x);
    getchar();
    
    char array[x+1];
    
    for (int y = 0; y < x; y++) {
        scanf("%c", &array[y]);
    }
    
    for (int z = 0; z < x; z++) {
        printf("%c", array[z]);
    }
    return 0;
    }