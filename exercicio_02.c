#include <stdio.h>
/*Nesse codigo o usuario insere seu genero no formato M para Masculino e F para feminino, além de sua altura em decimal (ex 1.70).
Após isso, o algoritmo compara os dados do usuario com os dados internos de altura e genero. Se o genero for M ou m (masculino), o
algoritmo compara com a altura media masculina (1.75).Se na etapa de geneo o usuario digitar F ou f (feminino), o algoritmo vai comparar
a segunda entrada (altura) com a altura media feminina (1.62). Após isso, ele retorna dizendo se sua altura esta acima, abaixo ou exatamente 
na média brasileira. Caso o usuario nao insira uma letra correspondente a M/m/F/f, o algoritmo acusa erro por genero invalido e se encerra.*/
int main() 
{
    char genero;
    float altura;
    
    printf("Digite seu gênero (M para masculino, F para feminino): ");
    scanf("%c", &genero);

    printf("Digite sua altura em metros (ex: 1.70): ");
    scanf("%f", &altura);

    if ((genero == 'M') || (genero == 'm'))
      {
      if (altura > 1.75) 
        {
        printf("Você está acima da altura média masculina (1.75 m).\n");
        }
        else if (altura < 1.75) 
        {
        printf("Você está abaixo da altura média masculina (1.75 m).\n");
        }
        else 
        {
        printf("Você está exatamente na altura média masculina (1.75 m).\n");
        }
    }
    else if (( genero == 'F') || (genero == 'f')) 
    {
        if (altura > 1.62) 
        {
        printf("Você está acima da altura média feminina (1.62 m).\n");
        } 
        else if (altura < 1.62) 
        {
        printf("Você está abaixo da altura média feminina (1.62 m).\n");
        }
        else 
        {
        printf("Você está exatamente na altura média feminina (1.62 m).\n");
        }
    }
    else 
    {
    printf("Gênero inválido. Use apenas M ou F.\n");
    }

    return 0;
}
