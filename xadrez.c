#include <stdio.h>

#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
#define DIAGONAL_SUP_DIR "Cima e Direita\n"

#define BISPO_MOV 5    
#define TORRE_MOV 5    
#define RAINHA_MOV 8  
#define CAVALO_MOV 3  // Total moves for Knight: 2 down, 1 left

int main() {
    int i;

    // Bishop movement
    printf("Movimentacao do Bispo:\n");
    for (i = 0; i < BISPO_MOV; i++) {
        printf("%d: %s", i + 1, DIAGONAL_SUP_DIR);
    }
    printf("\n");

    // Rook movement
    printf("Movimentacao da Torre:\n");
    i = 0;
    while (i < TORRE_MOV) {
        printf("%d: %s", i + 1, DIREITA);
        i++;
    }
    printf("\n");

    // Queen movement
    printf("Movimentacao da Rainha:\n");
    i = 0;
    do {
        printf("%d: %s", i + 1, ESQUERDA);
        i++;
    } while (i < RAINHA_MOV);
    printf("\n");

    // Knight movement
    printf("Movimentacao do Cavalo:\n");
    // Using nested loops to simulate the "L" shape movement
    int move_count = 0;
    for (int down = 0; down < 2; down++) {  // Loop for 2 downward moves
        printf("%d: %s", ++move_count, BAIXO);
        // Nested while loop for clarity, though not strictly necessary here
        int left = 0;
        while (left < 1 && down == 1) {  // Only move left after 2nd down move
            printf("%d: %s", ++move_count, ESQUERDA);
            left++;
        }
    }
    printf("\n");

    return 0;
}