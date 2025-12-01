#include <stdio.h>
#include <dirent.h>
#include "repertoire.h"

void lire_dossier(const char* nom_repertoire) {
    DIR* dossier = opendir(nom_repertoire);
    if (!dossier) {
        perror("Erreur ouverture répertoire");
        return;
    }

    struct dirent* entree;
    printf("Contenu du répertoire %s :\n", nom_repertoire);
    while ((entree = readdir(dossier)) != NULL) {
        printf("%s\n", entree->d_name);
    }

    closedir(dossier);
}
