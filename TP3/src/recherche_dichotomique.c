#include <stdio.h>

#define TAILLE 100

// Fonction de recherche dichotomique
int rechercheDichotomique(int tab[], int taille, int valeur) {
    int debut = 0;
    int fin = taille - 1;
    int milieu;

    while (debut <= fin) {
        milieu = (debut + fin) / 2;
        if (tab[milieu] == valeur) {
            return 1; // trouvé
        } else if (tab[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    return 0; // pas trouvé
}

int main() {
    int tab[TAILLE];
    int i;
    int valeur;

    // Remplissage du tableau avec des entiers triés de 1 à 100
    for (i = 0; i < TAILLE; i++) {
        tab[i] = i + 1; // valeurs de 1 à 100
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche dichotomique
    if (rechercheDichotomique(tab, TAILLE, valeur)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
