#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void moverbispo(int casa){
int casas;
    int a = 0;
   if (a < 5)
   {
   
     while ( a <= 5){
        printf("mova o bispo ate 5 casas superior direita:");
    scanf("%d", &casas);
for (casa; casa <= casas; casa ++)
{
    printf("cima ");

printf("direita\n");
a =+ casas;

}

printf("\n");
casa = 1;
    }
   
printf("limite atingido, voltando ao ponto inicial...\n");
a = 0;

}
}

void moverrainha(int casa) {
    int casas;
        int a = 0;
       if (a < 8)
       {
       
         while ( a <= 8){
            printf("mova a rainha ate 8 casas para a esquerda:");
        scanf("%d", &casas);

    for (casa; casa <= casas; casa ++)
    {
        printf("esquerda\n "); 
    a =+ casas;
    
    }
    
    printf("\n");
    casa = 1;
        }
       
    printf("limite atingido, voltando ao ponto inicial...\n");
    a = 0;
    
    }
    }

    void movertorre(int casa) {
        int casas;
            int a = 0;
           if (a < 5)
           {
           
             while ( a <= 5){
                printf("mova a torre ate 5 casas para a direita:");
            scanf("%d", &casas);
    
        for (casa; casa <= casas; casa ++)
        {
            printf("direita\n "); 
        a =+ casas;
        
        }
        
        printf("\n");
        casa = 1;
            }
           
        printf("limite atingido, voltando ao ponto inicial...\n");
        a = 0;
        
        }
        }
    


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover
    int bispo = 1;
    int rainha = 1;
    int torre = 1;
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
  moverbispo(bispo);

 break;
    
   case 2:
   moverrainha(rainha);
 break;
   

   case 3:
  movertorre(torre);

    break;
    case 4:

    do
    {
    for ( int i = 1; i <= 2; i++)
    {
        printf("cima\n");
        
    }
    printf("direita\n");
        break;
    } while (cavalo = 1);
    
break;
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

   

