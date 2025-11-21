#include <stdio.h>

void afficher_binaire(int n) {
    int i;
    int taille = sizeof(int) * 8; // nombre de bits dans un int

    int debut = 0; // pour ignorer les zéros non significatifs au début
    for (i = taille - 1; i >= 0; i--) {
        int bit = (n >> i) & 1; // extraction du bit à la position i
        if (bit == 1) {
            debut = 1;
        }
        if (debut) {
            printf("%d", bit);
        }
    }

    // Cas particulier pour 0
    if (!debut) {
        printf("0");
    }
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("%d en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
        printf("\n");
    }

    return 0;
}
