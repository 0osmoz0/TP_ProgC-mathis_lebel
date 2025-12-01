#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Définition de la structure couleur
typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

// Structure pour stocker une couleur distincte et son compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

// Fonction pour comparer deux couleurs (renvoie 1 si identiques, 0 sinon)
int couleursEgales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r) && (c1.g == c2.g) && (c1.b == c2.b) && (c1.a == c2.a);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurDistincte distinctes[TAILLE]; // maximum toutes distinctes
    int nbDistinctes = 0;

    srand(time(NULL));

    // Remplissage du tableau de couleurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nbDistinctes; j++) {
            if (couleursEgales(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nbDistinctes].couleur = tableau[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    // Affichage des couleurs distinctes et de leur compteur
    printf("Couleurs distinctes et occurrences :\n");
    for (int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
            distinctes[i].couleur.r,
            distinctes[i].couleur.g,
            distinctes[i].couleur.b,
            distinctes[i].couleur.a,
            distinctes[i].compteur);
    }

    return 0;
}
