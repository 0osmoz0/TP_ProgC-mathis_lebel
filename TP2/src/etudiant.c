#include <stdio.h>

int main() {
    // Tableaux de chaînes
    char noms[5][30] = {
        "Dupont", "Martin", "El Idrissi", "Nguyen", "Kouassi"
    };

    char prenoms[5][30] = {
        "Alice", "Pierre", "Sara", "Minh", "Jean"
    };

    char adresses[5][100] = {
        "12 Rue de Paris, Lyon",
        "45 Avenue du Port, Marseille",
        "3 Boulevard Hassan II, Rabat",
        "89 Rue des Fleurs, Hanoi",
        "27 Rue des Acacias, Abidjan"
    };

    // Tableaux de notes
    float note_prog[5] = {14.5, 12.0, 16.5, 13.0, 15.0};
    float note_sys[5]  = {13.0, 15.5, 14.0, 12.5, 16.0};

    // Affichage des informations
    printf("===== Liste des étudiant.e.s =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom       : %s\n", noms[i]);
        printf("Prénom    : %s\n", prenoms[i]);
        printf("Adresse   : %s\n", adresses[i]);
        printf("Note Prog C : %.2f\n", note_prog[i]);
        printf("Note Système : %.2f\n", note_sys[i]);
        printf("--------------------------------------\n");
    }

    return 0;
}
