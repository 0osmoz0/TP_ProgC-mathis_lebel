#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
} etudiant;

int main() {
    etudiant tab[5];

    for(int i = 0; i < 5; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i+1);
        printf("Nom : ");
        scanf("%s", tab[i].nom);
        printf("Prénom : ");
        scanf("%s", tab[i].prenom);
        getchar(); // consomme le \n restant
        printf("Adresse : ");
        fgets(tab[i].adresse, sizeof(tab[i].adresse), stdin);
        tab[i].adresse[strcspn(tab[i].adresse, "\n")] = 0; // supprime le saut de ligne
        printf("Note 1 : ");
        scanf("%f", &tab[i].note1);
        printf("Note 2 : ");
        scanf("%f", &tab[i].note2);
        getchar(); // consomme le \n restant
    }

    FILE* f = fopen("etudiant.txt", "w");
    if (!f) {
        printf("Impossible de créer le fichier etudiant.txt\n");
        return 1;
    }

    for(int i = 0; i < 5; i++) {
        fprintf(f, "%s %s %s %.2f %.2f\n",
                tab[i].nom, tab[i].prenom, tab[i].adresse, tab[i].note1, tab[i].note2);
    }

    fclose(f);
    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");

    return 0;
}
