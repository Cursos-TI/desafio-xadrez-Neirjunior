#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
for (int i=0; i<5; i++){
        printf("Torre andou uma casa para a Direita\n");        
    }
    printf("\n");
    int b=0;
    while (b<=4){        
        printf("Bispo andou uma casa Cima, Direita\n");
        b++;
    }
    printf("\n");
    int r=0;
    do{
        printf("Rainha andou uma casa para Esquerda\n");
        r++;
    }while(r<8);    
    return 0;
}
