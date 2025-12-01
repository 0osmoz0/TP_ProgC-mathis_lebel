#ifndef LISTE_H
#define LISTE_H

// Structure pour une couleur
struct couleur {
    unsigned char r, g, b, a;
};

// Structure pour la liste de couleurs (chaînée)
struct noeud {
    struct couleur c;
    struct noeud* suivant;
};

struct liste_couleurs {
    struct noeud* tete;
};

// Fonctions
void init_liste(struct liste_couleurs* l);
void insertion(struct couleur* c, struct liste_couleurs* l);
void parcours(struct liste_couleurs* l);

#endif
