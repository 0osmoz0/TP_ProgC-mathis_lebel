#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(liste_couleurs *liste) {
    liste->tete = NULL;
}

void insertion(couleur *c, liste_couleurs *liste) {
    couleur *nouveau = (couleur*)malloc(sizeof(couleur));
    *nouveau = *c;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

void parcours(liste_couleurs *liste) {
    couleur *courant = liste->tete;
    while (courant) {
        printf("%02X %02X %02X %02X\n", courant->r, courant->g, courant->b, courant->a);
        courant = courant->suivant;
    }
}

