#include <stdio.h>
#include <string.h>



/* Torre: repete uma direção N vezes recursivo */
void torre(int casas, const char* dir) {
    if (casas <= 0) return;
    printf("%s\n", dir);
    torre(casas - 1, dir);
}


void bispo(int casas, const char* v, const char* h) {
    if (casas <= 0) return;
    printf("%s\n", v);
    printf("%s\n", h);
    bispo(casas - 1, v, h);
}

void bispo_loops(int casas, const char* v, const char* h) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("%s\n", v);
            printf("%s\n", h);
        }
    }
}

void rainha(int casas, const char* a, const char* b) {
    if (casas <= 0) return;
    if (b == NULL || strlen(b) == 0) {
        printf("%s\n", a);
    } else {
        printf("%s\n", a);
        printf("%s\n", b);
    }
    rainha(casas - 1, a, b);
}

void cavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

int main() {
    /* Valores fixos códigos*/
    int casas_torre = 3;
    int casas_bispo = 2;
    int casas_rainha = 4;

    /* Torre */
    printf("Torre (Direita):\n");
    torre(casas_torre, "Direita");
    printf("\n");

    printf("Torre (Cima):\n");
    torre(casas_torre, "Cima");
    printf("\n");

    /* Bispo */
    printf("Bispo (Recursivo) Cima + Direita:\n");
    bispo(casas_bispo, "Cima", "Direita");
    printf("\n");

    printf("Bispo (Loops) Cima + Direita:\n");
    bispo_loops(casas_bispo, "Cima", "Direita");
    printf("\n");

    /* Rainha */
    printf("Rainha (Esquerda):\n");
    rainha(casas_rainha, "Esquerda", "");
    printf("\n");

    printf("Rainha (Baixo + Direita):\n");
    rainha(casas_rainha, "Baixo", "Direita");
    printf("\n");

    /* Cavalo */
    printf("Cavalo (L: duas Cima e uma Direita):\n");
    cavalo();
    printf("\n");

    return 0;
}
