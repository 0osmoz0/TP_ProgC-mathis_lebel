#ifndef LISTE_H
#define LISTE_H

typedef struct couleur {
    unsigned char r, g, b, a;
    struct couleur *suivant;
} couleur;

typedef struct {
    couleur *tete;
} liste_couleurs;

void init_liste(liste_couleurs *liste);
void insertion(couleur *c, liste_couleurs *liste);
void parcours(liste_couleurs *liste);

#endif
