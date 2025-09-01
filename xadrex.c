#include <stdio.h>

int main() {
    int i; // variável para contar

    // Torre com for
    printf("Movimento da TORRE:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Bispo com while
    printf("Movimento do BISPO:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // Rainha com do-while
    printf("Movimento da RAINHA:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}
