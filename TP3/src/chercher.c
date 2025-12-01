#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, valeur;
    int trouve = 0; // flag pour indiquer si la valeur est trouvée

    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires entre -50 et 50
    for (i = 0; i < TAILLE; i++) {
        tab[i] = rand() % 101 - 50;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche de l'entier
    for (i = 0; i < TAILLE; i++) {
        if (tab[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
