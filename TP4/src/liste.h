#ifndef LISTE_H
#define LISTE_H

// Structure pour une couleur
typedef struct couleur {
    unsigned char r, g, b, a;
} couleur;

// Noeud de la liste chaînée
typedef struct noeud {
    couleur c;
    struct noeud* suivant;
} noeud;

// Liste de couleurs
typedef struct liste_couleurs {
    noeud* tete;
} liste_couleurs;

// Prototypes
void init_liste(liste_couleurs* l);
void insertion(couleur* c, liste_couleurs* l);
void parcours(liste_couleurs* l);

#endif
