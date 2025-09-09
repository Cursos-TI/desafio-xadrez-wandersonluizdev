#include <stdio.h>


int main() {


    int i; // Variável 
int movimentocompleto = 1;

    // Torre com For
    printf("Movimento da TORRE:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo com While
    printf("Movimento do BISPO:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Rainha com Do-While
    printf("Movimento da RAINHA:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

// Cavalo se Move em L 
printf("Movimento do CAVALO:\n");
while (movimentocompleto--)
for (int i = 0; i < 2; i++) {
printf("Cima \n");
}
printf("Direita \n");


    return 0;
}
