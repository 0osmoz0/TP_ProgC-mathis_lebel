#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];

    int i = 0;
    int longueur = 0;

    /* ---- Calcul de la longueur de str1 ---- */
    while (str1[longueur] != '\0') {
        longueur++;
    }

    printf("Longueur de \"%s\" = %d\n", str1, longueur);

    /* ---- Copie de str1 dans copie ---- */
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';  // terminer proprement

    printf("Copie de str1 : %s\n", copie);

    /* ---- Concaténation de str1 et str2 dans concat ---- */
    i = 0;
    int j = 0;

    // Copie de str1 dans concat
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

    // Ajout de str2 à la suite
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }

    concat[i] = '\0';  // fin de chaîne

    printf("Concaténation : %s\n", concat);

    return 0;
}
