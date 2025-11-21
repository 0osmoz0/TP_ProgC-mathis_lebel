#include <stdio.h>

int main() {
    int compteur = 5;

    // Vérification de la valeur de compteur
    if (compteur >= 10) {
        printf("Erreur : compteur doit etre < 10\n");
        return 1;
    }

    printf("===== Version avec FOR =====\n\n");

    // Version avec FOR
    for (int i = 1; i <= compteur; i++) {      // ligne courante
        for (int j = 1; j <= i; j++) {         // position dans la ligne
            if (i % 2 == 0 && j != 1 && j != i) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n"); // nouvelle ligne après chaque ligne du triangle
    }

    printf("\n===== Version avec WHILE =====\n\n");

    // Version avec WHILE
    int i = 1;
    while (i <= compteur) {          // boucle sur les lignes
        int j = 1;
        while (j <= i) {             // boucle sur les colonnes
            if (i % 2 == 0 && j != 1 && j != i) {
                printf("# ");
            } else {
                printf("* ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
