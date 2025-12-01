#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char* nom_fichier) {
    FILE *f = fopen(nom_fichier, "r");
    if (!f) { printf("Impossible d'ouvrir le fichier.\n"); return; }

    char ligne[256];
    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }
    fclose(f);
}

void ecrire_dans_fichier(const char* nom_fichier, const char* message) {
    FILE *f = fopen(nom_fichier, "w");
    if (!f) { printf("Impossible d'ouvrir le fichier.\n"); return; }
    fprintf(f, "%s\n", message);
    fclose(f);
}
