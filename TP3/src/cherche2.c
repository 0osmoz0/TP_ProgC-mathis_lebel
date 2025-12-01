#include <stdio.h>

#define NB_PHRASES 10
#define MAX_LONGUEUR 100

// Fonction pour comparer deux chaînes de caractères
// Renvoie 1 si identiques, 0 sinon
int chainesEgales(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; // caractères différents
        }
        i++;
    }
    // Vérifie que les deux chaînes se terminent en même temps
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1;
    }
    return 0;
}

int main() {
    // Tableau de 10 phrases
    char *phrases[NB_PHRASES] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char phraseRecherchee[MAX_LONGUEUR];
    int trouve = 0;

    // Demande de la phrase à chercher
    printf("Entrez la phrase à chercher :\n");
    fgets(phraseRecherchee, MAX_LONGUEUR, stdin);

    // Supprimer le retour chariot éventuel de fgets
    int i = 0;
    while (phraseRecherchee[i] != '\0') {
        if (phraseRecherchee[i] == '\n') {
            phraseRecherchee[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche de la phrase
    for (i = 0; i < NB_PHRASES; i++) {
        if (chainesEgales(phraseRecherchee, phrases[i])) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
