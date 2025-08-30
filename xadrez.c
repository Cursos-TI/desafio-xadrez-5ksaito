#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    
    // Movimentação do Bispo (simulando uma diagonal)
    int posicaoBispo = 1;
    char opcao;

    printf("Escolha seu movimento para o Bispo:\n");
    printf("1. Diagonal Para Cima Esquerda.\n");
    printf("2. Diagonal Para Baixo Esquerda.\n");
    printf("3. Diagonal Para Cima Direita.\n");
    printf("4. Diagonal Para Baixo Direita.\n");

    printf("\n");

    printf("Escolha sua jogada:");
    scanf("%c", &opcao);
    printf("\n");

for (posicaoBispo = 1; posicaoBispo <= 5; posicaoBispo++)

    switch (opcao)
    {
    case '1': printf("Movimento na diagonal, Cima Esquerda %d\n", posicaoBispo);
    break;

    case '2': printf("Movimento na diagonal, Baixo Esquerda %d\n", posicaoBispo);
    break;

    case '3': printf("Movimento na diagonal, Cima direta %d\n", posicaoBispo);
    break;

    case '4': printf("Movimento na diagonal, Baixo Direta %d\n", posicaoBispo);
    break;

    default:
        printf("Opção Inválida.\n");
        break;
    }

    //printf("Movimentação do Bispo em uma diagonal direita:\n");
    //printf("\n");

    //for (int i = 0; i <= 4; i++) {
        //printf("Movimento para a diagonal, direita e cima %d\n", i);

    //}

        printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    
    // Movimentação da Torre (simulando para a direita)
    printf("Movimentação da Torre para frente:\n");
    printf("\n");

    //for (int i = 1; i <= 5; i++) {
       // printf("Movimento %d\n", i);
    //}
    
    int posicaoTorre = 1;

    do
    {
            printf("Movimento %d\n", posicaoTorre);
            posicaoTorre++;

            /*if (posicaoTorre <= 5) 
            {
                posicaoTorre++;
            } else {
                printf("Movimento\n %d", posicaoTorre);
                
            }
            */

        
    } while (posicaoTorre != 6);
        
    

    printf("\n");
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Movimentação da Rainha (simulando para a esquerda)
    printf("Movimentação da Rainha para a esquerda:\n");
    printf("\n");

    //for (int i = 1; i <= 8; i++) {
        ///printf("Movimento %d\n", i);
    //}

    int posicaoInicial = 1;

        while (posicaoInicial <= 8)
        
        {
            printf("Movimento %d\n", posicaoInicial);
            posicaoInicial++;
        }
        
    printf("\n");


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

        // Variáveis para simular a movimentação do Cavalo
    int movimento_vertical = 2; // Duas casas para baixo
    int movimento_horizontal = 1; // Uma casa para a esquerda
    int i = 0; // Contador para o loop externo

    printf("Movimentando o Cavalo...\n\n");

    // Loop for para a movimentação vertical (2 casas para baixo)
    for (i = 0; i < movimento_vertical; i++) {
        printf("Baixo\n");
    }

    // Loop while para a movimentação horizontal (1 casa para a esquerda)
    while (movimento_horizontal > 0) {
        printf("Esquerda\n");
        movimento_horizontal--;
    }

        printf("\n");
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
