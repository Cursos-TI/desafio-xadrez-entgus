#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover
    int bispo = 0;
    int rainha = 0;
    int torre = 0;
    int cavalo = 0;
    int casas;
    int escolha;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("escolha um para mover\n");

    printf("1.mova o bispo\n");
    printf("2.mova a rainha\n");
    printf("3.mova a torre\n");
    printf("4.mova o cavalo\n");

scanf("%d", &escolha);


switch (escolha)
{
    case 1:
    do
    { 
        printf("mova o bispo ate 5 casas superior direita:");
        scanf("%d", &casas);
        bispo = 0;

        if(bispo > 5){

            printf(" bispo andou %d casas: limite excedido\n", bispo);
            bispo -= casas;
            printf("retornando para casa :%d\n", bispo);

        } else {
            printf("bispo andou %d para superior direita\n", bispo);
        }

    } while (bispo <= 5);
 
 break;
    
   case 2:
   do
   {
   printf("mova a rainha ate 8 casas para a esquerda:");
   scanf("%d", &casas);
   rainha += casas;

   if(rainha > 8){

       printf(" rainha andou %d casas: limite excedido\n", rainha);
 rainha = 0 ;
 printf("retornando para casa :%d\n", rainha);
   } else {
       printf("rainha andou %d para esquerda\n", rainha);
   }

}while (rainha <= 8);
 break;
   

   case 3:
   do
   {
   printf("mova a torre ate 5 casas para a direita:");
        scanf("%d", &casas);
        torre = 0;
        if(torre > 5){

            printf(" torre andou %d casas: limite excedido\n", torre);
            torre == 0;
            printf("retornando para casa :%d\n", torre);
        } else {
            printf("torre andou %d para direita\n", rainha);

            
        }

    }while (rainha <= 5);

    break;
    case 4:

    do
    {
    for ( int i = 1; i <= 2; i++)
    {
        printf("baixo\n");
    }
    printf("esquerda\n");
        
    } while (cavalo = 0);
    
    {
        /* code */
    }
    

default:

printf("invalido");

break;
}   
return 0;

}





    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

   

