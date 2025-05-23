#include <stdio.h>


#define CIMA "Cima\n"
#define BAIXO "Baixo\n"
#define ESQUERDA "Esquerda\n"
#define DIREITA "Direita\n"
#define DIAGONAL_SUP_DIR "Cima e Direita\n"


#define BISPO_MOV 5    
#define TORRE_MOV 5    
#define RAINHA_MOV 8  

int main() {
   
    int i;


    printf("Movimentacao do Bispo:\n");
    for (i = 0; i < BISPO_MOV; i++) {
        // O Bispo se move combinando Cima e Direita
        printf("%d: %s", i + 1, DIAGONAL_SUP_DIR);
    }
    printf("\n");

    
    printf("Movimentacao da Torre:\n");
    i = 0;
    while (i < TORRE_MOV) {
        printf("%d: %s", i + 1, DIREITA);
        i++;
    }
    printf("\n");

    
    printf("Movimentacao da Rainha:\n");
    do {
        printf("%d: %s", i + 1, ESQUERDA);
        i++;
    } while (i < RAINHA_MOV);
    printf("\n");

    return 0;
}