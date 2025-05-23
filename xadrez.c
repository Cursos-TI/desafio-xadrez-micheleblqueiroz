#include <stdio.h>

#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
#define DIAGONAL_SUP_DIR "Cima e Direita\n"

#define BISPO_MOV 5   
#define TORRE_MOV 5    
#define RAINHA_MOV 8   
#define CAVALO_MOV 3   


void moveBispo(int move, int max_moves) {
    if (move > max_moves) return; 
    

    int vertical;
    for (vertical = 0; vertical < 1; vertical++) { 
        int horizontal = 0;
        while (horizontal < 1) { 
            printf("%d: %s", move, DIAGONAL_SUP_DIR);
            horizontal++;
        }
    }
    
    
    moveBispo(move + 1, max_moves);
}


void moveTorre(int move, int max_moves) {
    if (move > max_moves) return; 
    
    printf("%d: %s", move, DIREITA);
    moveTorre(move + 1, max_moves); 
}


void moveRainha(int move, int max_moves) {
    if (move > max_moves) return;
    
    printf("%d: %s", move, ESQUERDA);
    moveRainha(move + 1, max_moves); 
}

int main() {
   
    printf("Movimentacao do Bispo:\n");
    moveBispo(1, BISPO_MOV);
    printf("\n");

   
    printf("Movimentacao da Torre:\n");
    moveTorre(1, TORRE_MOV);
    printf("\n");

   
    printf("Movimentacao da Rainha:\n");
    moveRainha(1, RAINHA_MOV);
    printf("\n");

   
    printf("Movimentacao do Cavalo:\n");
    int move_count = 0;
    int max_up = 2; 
    int max_right = 1; 
    int up_count = 0;
    
    
    for (int i = 0; i < CAVALO_MOV; i++) {
        
        if (up_count >= max_up) {
            continue; 
        }
        
        
        int j = 0;
        while (j < 1) {
            if (up_count < max_up) {
                printf("%d: %s", ++move_count, CIMA);
                up_count++;
            } else {
                
                printf("%d: %s", ++move_count, DIREITA);
                break; 
            }
            j++;
        }
        
        
        if (move_count >= CAVALO_MOV) {
            break;
        }
    }
    printf("\n");

    return 0;
}