#include <stdio.h>
#include <string.h>   // pour strcpy

// Définition de la structure Étudiant.e
struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;   // note en Programmation C
    float note2;   // note en Système d’exploitation
};

int main() {

    struct Etudiant etudiants[5];

    // Remplissage des informations
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "El Idrissi");
    strcpy(etudiants[2].prenom, "Sara");
    strcpy(etudiants[2].adresse, "Rue Hassan II, Rabat");
    etudiants[2].note1 = 15.5;
    etudiants[2].note2 = 13.4;

    strcpy(etudiants[3].nom, "Nguyen");
    strcpy(etudiants[3].prenom, "Minh");
    strcpy(etudiants[3].adresse, "89 Rue des Fleurs, Hanoi");
    etudiants[3].note1 = 13.2;
    etudiants[3].note2 = 12.8;

    strcpy(etudiants[4].nom, "Kouassi");
    strcpy(etudiants[4].prenom, "Jean");
    strcpy(etudiants[4].adresse, "27 Rue des Acacias, Abidjan");
    etudiants[4].note1 = 15.8;
    etudiants[4].note2 = 16.3;

    // Affichage des données
    printf("======= Informations des étudiant.e.s =======\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prénom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("Note 1   : %.2f\n", etudiants[i].note1);
        printf("Note 2   : %.2f\n", etudiants[i].note2);
        printf("-------------------------------------------\n");
    }

    return 0;
}
