#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i;
    int max, min;

    // Initialisation de la graine aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    // Initialisation de max et min avec le premier élément
    max = tab[0];
    min = tab[0];

    // Parcours du tableau pour trouver le plus grand et le plus petit
    for (i = 1; i < TAILLE; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    // Affichage des résultats
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
