#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;

    // Affichage des résultats arithmétiques
    printf("a + b = %d\n", addition);
    printf("a - b = %d\n", soustraction);
    printf("a * b = %d\n", multiplication);
    printf("a / b = %d\n", division);
    printf("a %% b = %d\n\n", modulo); // %% pour afficher le symbole %

    // Opérations logiques / comparaisons
    int egal = (a == b);
    int superieur = (a > b);

    // Affichage des résultats logiques sous forme de booléen (0 = faux, 1 = vrai)
    printf("a == b : %d\n", egal);
    printf("a > b  : %d\n", superieur);

    return 0;
}
