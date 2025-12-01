#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    srand(time(NULL)); // initialisation de la graine aléatoire

    // Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(tab_int + i) = rand() % 101;          // entier entre 0 et 100
        *(tab_float + i) = (float)(rand() % 1000) / 100.0f; // float entre 0.00 et 9.99
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant multiplication par 3) :\n");
    for (int *p = tab_int; p < tab_int + TAILLE; p++) {
        printf("%d ", *p);
    }
    printf("\n\n");

    printf("Tableau de float (avant multiplication par 3) :\n");
    for (float *p = tab_float; p < tab_float + TAILLE; p++) {
        printf("%.2f ", *p);
    }
    printf("\n\n");

    // Multiplication par 3 des éléments dont l'indice est divisible par 2
    int idx = 0;
    for (int *p = tab_int; p < tab_int + TAILLE; p++, idx++) {
        if (idx % 2 == 0) {
            *p *= 3;
        }
    }

    idx = 0;
    for (float *p = tab_float; p < tab_float + TAILLE; p++, idx++) {
        if (idx % 2 == 0) {
            *p *= 3.0f;
        }
    }

    // Affichage après multiplication
    printf("Tableau d'entiers (après multiplication par 3) :\n");
    for (int *p = tab_int; p < tab_int + TAILLE; p++) {
        printf("%d ", *p);
    }
    printf("\n\n");

    printf("Tableau de float (après multiplication par 3) :\n");
    for (float *p = tab_float; p < tab_float + TAILLE; p++) {
        printf("%.2f ", *p);
    }
    printf("\n");

    return 0;
}
