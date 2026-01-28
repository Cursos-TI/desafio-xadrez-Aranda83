#include <stdio.h>

    // Desafio de movimentação de peças de xadrez
    // Torre, Bispo e Rainha

int main(){
    // Definição das peças

    int torre = 1, bispo = 1, rainha = 1;
    int i;

    // Torre se movimenta 5 casa para a direita horizontalmente
    printf("### Movimentação da torre ###\n");
    for (i = 0; i < 5; i++) {

        printf("Direita\n");
    }

    printf("\n");

    // Bispo se movimenta 5 casas na diagonal superior direita
    printf("### Movimentação do bispo ###\n");
    int casasBispo = 0;
    while (casasBispo < 5) {

        printf("Cima, Direita\n");
        casasBispo++;
    }

    printf("\n");


    // Rainha se movimenta 8 casas para esquerda horizontalmente
    printf("### Movimentação da rainha ###\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;

    } while (casasRainha < 8);
    printf("\n");

    // Cavalo se movimenta 2 casas para cima e uma casa para a direira ( movimento em L)
    printf("### Movimentação do cavalo ###");
    int movimentoCompleto = 1;  // controla o movimento em L
       printf("\n");
    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        
        printf("Cima\n");
       
    }
    printf("Direita\n");

 return 0;


    }

   
    

















