#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

// Déclarations des exercices
void exercice_4_0();
void exercice_4_1();
void exercice_4_2();
void exercice_4_7();

int main() {
    int choix;
    while(1){
        printf("\n=== Menu TP4 ===\n");
        printf("0: Débogage (4.0)\n");
        printf("1: Calcul avec opérateurs (4.1)\n");
        printf("2: Gestion fichiers (4.2)\n");
        printf("7: Liste de couleurs (4.7)\n");
        printf("8: Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar(); // consomme le \n
        switch(choix){
            case 0: exercice_4_0(); break;
            case 1: exercice_4_1(); break;
            case 2: exercice_4_2(); break;
            case 7: exercice_4_7(); break;
            case 8: exit(0);
            default: printf("Choix invalide.\n");
        }
    }
    return 0;
}

// Exercice 4.0 : simple test
void exercice_4_0(){
    int a = 10, b = 5;
    int c = a + b;
    printf("Exercice 4.0 : a + b = %d\n", c);
}

// Exercice 4.1 : calcul avec opérateurs
void exercice_4_1(){
    int num1, num2, res;
    char op;
    printf("Num1 : "); scanf("%d", &num1);
    printf("Num2 : "); scanf("%d", &num2);
    getchar();
    printf("Opérateur (+,-,*,/,%%,&,|,~) : ");
    scanf("%c", &op);

    switch(op){
        case '+': res = somme(num1,num2); break;
        case '-': res = difference(num1,num2); break;
        case '*': res = produit(num1,num2); break;
        case '/': res = quotient(num1,num2); break;
        case '%': res = modulo(num1,num2); break;
        case '&': res = et(num1,num2); break;
        case '|': res = ou(num1,num2); break;
        case '~': res = negation(num1); break;
        default: printf("Opérateur invalide\n"); return;
    }
    printf("Résultat : %d\n", res);
}

// Exercice 4.2 : gestion de fichiers
void exercice_4_2(){
    int choix;
    char nom[256], message[256];
    printf("1: Lire  2: Écrire : "); scanf("%d", &choix); getchar();
    if(choix == 1){
        printf("Nom fichier : "); fgets(nom, sizeof(nom), stdin);
        nom[strcspn(nom, "\n")] = 0;
        lire_fichier(nom);
    } else if(choix == 2){
        printf("Nom fichier : "); fgets(nom, sizeof(nom), stdin);
        nom[strcspn(nom, "\n")] = 0;
        printf("Message : "); fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = 0;
        ecrire_dans_fichier(nom, message);
    } else {
        printf("Choix invalide\n");
    }
}

// Exercice 4.7 : gestion d'une liste de couleurs
void exercice_4_7(){
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleurs[3] = {
        {0xFF, 0x00, 0x00, 0xFF}, // rouge
        {0x00, 0xFF, 0x00, 0xFF}, // vert
        {0x00, 0x00, 0xFF, 0xFF}  // bleu
    };

    for(int i=0;i<3;i++){
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}
