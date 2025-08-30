C

#include <stdio.h>

// Funções Recursivas para Movimentação de Peças

/**
 * Simula o movimento da Torre de forma recursiva.
 */
void move_torre_recursivo(int passos) {
    // Caso base: a recursão para quando não há mais passos.
    if (passos <= 0) {
        return;
    }

    printf("Cima\n");

    // Chamada recursiva para o próximo passo.
    move_torre_recursivo(passos - 1);
}

/**
 * Simula o movimento da Rainha de forma recursiva.
 */
void move_rainha_recursivo(int passos) {
    // Caso base: a recursão para quando não há mais passos.
    if (passos <= 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva para o próximo passo.
    move_rainha_recursivo(passos - 1);
}

// Funções com Loops Complexos

/**
 * Simula o movimento do Cavalo com loops aninhados e controle de fluxo.
 * O movimento em 'L' (duas casas para cima e uma para a direita) é simulado
 * com um loop externo para o movimento vertical e um interno para o horizontal.
 */
void move_cavalo_complexo(int mov_vertical, int mov_horizontal) {
    printf("Movimentacao do Cavalo (Loops aninhados com continue/break):\n");
    
    int movimento_vertical_count;
    
    for (movimento_vertical_count = 0; movimento_vertical_count < mov_vertical + mov_horizontal; movimento_vertical_count++) {
        // Se o contador for menor que o movimento vertical, imprime "Cima"
        if (movimento_vertical_count < mov_vertical) {
            printf("Cima\n");
            continue; // Pula para a próxima iteração do loop externo
        }
        
        // Se o contador for maior ou igual ao movimento vertical, imprime "Direita"
        if (movimento_vertical_count >= mov_vertical && movimento_vertical_count < (mov_vertical + mov_horizontal)) {
            printf("Direita\n");
            continue;
        }

        // Condição de 'break' para garantir que o loop pare
        if (movimento_vertical_count >= (mov_vertical + mov_horizontal)) {
            break;
        }
    }
}

/**
 * Simula o movimento do Bispo com loops aninhados.
 * Um loop externo para o movimento vertical e um interno para o horizontal.
 */
void move_bispo_aninhado() {
    printf("Movimentacao do Bispo (Loops aninhados):\n");

    // Loop externo para o movimento vertical (cima)
    for (int i = 1; i <= 5; i++) {
        // Loop interno para o movimento horizontal (direita)
        for (int j = 1; j <= 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}


int main() {
    // Nível Mestre - Funções Recursivas
    printf("--- Movimentacao da Torre (Recursiva) ---\n");
    move_torre_recursivo(5); // Movimentando 5 casas
    printf("\n");

    printf("--- Movimentacao da Rainha (Recursiva) ---\n");
    move_rainha_recursivo(8); // Movimentando 8 casas
    printf("\n");
    
    // Nível Mestre - Loops Aninhados e Complexos
    int mov_vertical_cavalo = 2;
    int mov_horizontal_cavalo = 1;
    move_cavalo_complexo(mov_vertical_cavalo, mov_horizontal_cavalo);
    printf("\n");
    
    // Nível Mestre - Bispo com loops aninhados
    move_bispo_aninhado();
    printf("\n");

    return 0;
}