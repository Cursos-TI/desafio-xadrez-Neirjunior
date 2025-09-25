#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{   
    int torre, bispo, rainha, cavalo;
    int casaT, casaB, casaR, casaC;
    char ladoT, ladobB, ladoR, ladoC;

    printf("Escolha quantidade de casa, (1 a 7), para a Torre andar: ");
    scanf("%d", &casaT);
    printf("Escolha qual o lado, (D/E) para a Torre andar: ");
    scanf(" %c", &ladoT);
    if (ladoT=='E' || ladoT=='e'){
        for (torre=0; torre<casaT; torre++){
            printf("Torre andou uma casa para a Esquerda\n");
        }
    }else if(ladoT=='D' || ladoT=='d'){
        for (torre=0; torre<casaT; torre++){
        printf("Torre andou uma casa para a Direita\n");
        }
    }
    printf("\nEscolha quantidade de casa, (1 a 5), para o Bispo andar: ");
    scanf("%d", &casaB);
    printf("Escolha qual o lado, (D/E) para o Bispo andar: ");
    scanf(" %c", &ladobB);
    if (ladobB=='E' || ladobB=='e'){
        bispo=0;
        while (bispo<=casaB){        
        printf("Bispo andou uma casa Cima, Esquerda\n");
        bispo++;}
    }else if (ladobB=='D' || ladobB=='d'){
        bispo=0;
        while (bispo<=casaB){        
        printf("Bispo andou uma casa Cima, Direita\n");
        bispo++;}
    }    
    printf("\nEscolha quantidade de casa, (1 a 7), para o Rainha andar: ");
    scanf("%d", &casaR);
    printf("Escolha qual o lado, (D/E) para o Rainha andar: ");
    scanf(" %c", &ladoR);
    if(ladoR=='E' || ladoR=='e'){
        rainha=0;
        do{
            printf("Rainha andou uma casa para Esquerda\n");
            rainha++;
        }while(rainha<casaR);
    }else if(ladoR=='D' || ladoR=='d'){
        rainha=0;
        do{
            printf("Rainha andou uma casa para Direita\n");
            rainha++;
        }while(rainha<casaR); 
    }   
    printf("\nEscolha qual o lado, (D/E) o Cavalo vai andar: ");
    scanf(" %c", &ladoC);

    if (ladoC=='E' || ladoC=='e'){
        ladoC=1;
        while(ladoC--){
            for(casaC=0; casaC<=1; casaC++){
                printf("O Cavalo andou uma casa para cima\n");
            }printf("O Cavalo andou para a Esquerda\n");}    
    }else if(ladoC=='D' || ladoC=='d') {
        ladoC=1;
        while(ladoC--){
            for(casaC=0; casaC<=1; casaC++){
                printf("O cavalo andou uma casa para cima\n");
            }printf("O Cavalo andou para a Direita\n");}        
    }return 0;
}
