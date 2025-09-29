#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int torre, bispo, rainha, cavalo;
int casaT, casaB, casaR, casaC;
char ladoT, ladobB, ladoR, ladoC;

void moviTorre(int casaT){
    if(casaT > 0){
        if (ladoT=='E' || ladoT=='e'){   
            printf("Esquerda\n");
            moviTorre(casaT -1);            
        }else if(ladoT=='D' || ladoT=='d'){
            printf("Direita\n");
            moviTorre(casaT -1);       
        }
    }
}
void moviBispo(int casaB){
    bispo=0;
    while (bispo<casaB){
        if (ladobB=='E' || ladobB=='e'){             
            printf("Cima\nEsquerda\n");
        }else if (ladobB=='D' || ladobB=='d'){       
            printf("Cima\nDireita\n");           
        }bispo++;
    }  
}
void moviRainha(int casaR){
    rainha=0;
    do{    
        if(ladoR=='E' || ladoR=='e'){
            printf("Esquerda\n");
        }else if(ladoR=='D' || ladoR=='d'){
            printf("Direita\n");   
            } rainha++;
        }while(rainha<casaR);
}
void moviCavalo(int casaC){
    if (ladoC=='E' || ladoC=='e'){
        ladoC=1;
        while(ladoC--){
            for(casaC=0; casaC<=1; casaC++){
                printf("Cima\n");
            }printf("Esquerda\n");
        }    
    }else if(ladoC=='D' || ladoC=='d') {
        ladoC=1;
        while(ladoC--){
            for(casaC=0; casaC<=1; casaC++){
                printf("Cima\n");
            }printf("Direita\n");
        }
    }
}
int main(){
    printf("Escolha quantidade de casa, (1 a 7), para a Torre andar: ");
    scanf("%d", &casaT);
    printf("Escolha qual o lado, (D/E) para a Torre andar: ");
    scanf(" %c", &ladoT);
    moviTorre(casaT);
    printf("\nEscolha quantidade de casa, (1 a 5), para o Bispo andar: ");
    scanf("%d", &casaB);
    printf("Escolha qual o lado, (D/E) para o Bispo andar: ");
    scanf(" %c", &ladobB);
    moviBispo(casaB);
    printf("\nEscolha quantidade de casa, (1 a 7), para o Rainha andar: ");
    scanf("%d", &casaR);
    printf("Escolha qual o lado, (D/E) para a Rainha andar: ");
    scanf(" %c", &ladoR);
    moviRainha(casaR);
    printf("\nEscolha qual o lado, (D/E) o Cavalo vai andar: ");
    scanf(" %c", &ladoC);
    moviCavalo(casaC);
    return 0;
}}
