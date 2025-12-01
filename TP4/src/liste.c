#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(liste_couleurs *liste) {
    liste->tete = NULL;
}

void insertion(couleur *c, liste_couleurs *liste) {
    noeud *n = (noeud*)malloc(sizeof(noeud));
    if(!n) return;
    n->c = *c;
    n->suivant = liste->tete;
    liste->tete = n;
}

void parcours(liste_couleurs *liste) {
    noeud *courant = liste->tete;
    while(courant) {
        printf("Couleur: R=%d G=%d B=%d A=%d\n",
               courant->c.r, courant->c.g, courant->c.b, courant->c.a);
        courant = courant->suivant;
    }
}
