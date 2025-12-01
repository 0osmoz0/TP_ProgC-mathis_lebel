#ifndef FICHIER_H
#define FICHIER_H

void lire_fichier(const char* nom_fichier);
void ecrire_dans_fichier(const char* nom_fichier, const char* message);

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
} etudiant;

#endif
