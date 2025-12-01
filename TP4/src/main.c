#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Inclure tous les fichiers d'exercice
#include "operator.h"   // 4.1 et 4.4
#include "fichier.h"    // 4.2 et 4.3
#include "liste.h"      // 4.7

// Prototypes pour les exercices 4.0 à 4.7
void exercice_4_0();
void exercice_4_1();
void exercice_4_2();
void exercice_4_3();
void exercice_4_4();
void exercice_4_5();
void exercice_4_6();
void exercice_4_7();

int main() {
    int choix;

    while (1) {
        printf("\n=== Menu des exercices ===\n");
        printf("0. Débogage (4.0)\n");
        printf("1. Calcul avec opérateurs (4.1)\n");
        printf("2. Gestion de fichiers (4.2)\n");
        printf("3. Base de données étudiante (4.3)\n");
        printf("4. Calculatrice CLI (4.4)\n");
        printf("5. Factorielle (4.5)\n");
        printf("6. Recherche phrase dans fichier (4.6)\n");
        printf("7. Liste de couleurs (4.7)\n");
        printf("8. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 0: exercice_4_0(); break;
            case 1: exercice_4_1(); break;
            case 2: exercice_4_2(); break;
            case 3: exercice_4_3(); break;
            case 4: exercice_4_4(); break;
            case 5: exercice_4_5(); break;
            case 6: exercice_4_6(); break;
            case 7: exercice_4_7(); break;
            case 8: exit(0);
            default: printf("Choix invalide.\n");
        }
    }

    return 0;
}


