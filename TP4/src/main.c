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
void exercice_4_3();
void exercice_4_4(int argc, char* argv[]);
void exercice_4_5();
void exercice_4_6();
void exercice_4_7();

// On inclut le fichier externe pour les étudiants
void saisie_etudiants();  // depuis etudiant_bd.c

int main(int argc, char* argv[]) {
    int choix;
    while(1){
        printf("\n=== Menu TP4 ===\n");
        printf("0: Débogage (4.0)\n");
        printf("1: Calcul avec opérateurs (4.1)\n");
        printf("2: Gestion fichiers (4.2)\n");
        printf("3: Base étudiante (4.3)\n");
        printf("4: Calculatrice CLI (4.4)\n");
        printf("5: Factorielle (4.5)\n");
        printf("6: Recherche phrase fichier (4.6)\n");
        printf("7: Liste de couleurs (4.7)\n");
        printf("8: Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        getchar();
        switch(choix){
            case 0: exercice_4_0(); break;
            case 1: exercice_4_1(); break;
            case 2: exercice_4_2(); break;
            case 3: saisie_etudiants(); break;  // Appel à la fonction externe
            case 4: exercice_4_4(argc, argv); break;
            case 5: exercice_4_5(); break;
            case 6: exercice_4_6(); break;
            case 7: exercice_4_7(); break;
            case 8: exit(0);
            default: printf("Choix invalide.\n");
        }
    }
    return 0;
}

// Exercice 4.0
void exercice_4_0(){
    int a=10, b=5;
    int c=a+b;
    printf("a+b=%d\n", c);
}

// Exercice 4.1
void exercice_4_1(){
    int num1, num2;
    char op;
    printf("Num1 : "); scanf("%d",&num1);
    printf("Num2 : "); scanf("%d",&num2);
    getchar();
    printf("Opérateur (+,-,*,/,%%,&,|,~) : "); // échappement du %
    scanf("%c",&op);
    int res;
    switch(op){
        case '+': res=somme(num1,num2); break;
        case '-': res=difference(num1,num2); break;
        case '*': res=produit(num1,num2); break;
        case '/': res=quotient(num1,num2); break;
        case '%': res=modulo(num1,num2); break;
        case '&': res=et(num1,num2); break;
        case '|': res=ou(num1,num2); break;
        case '~': res=negation(num1); break;
        default: printf("Opérateur invalide\n"); return;
    }
    printf("Résultat : %d\n", res);
}

// Exercice 4.2
void exercice_4_2(){ 
    int c; char nom[100], message[256];
    printf("1: Lire 2: Écrire : "); scanf("%d",&c); getchar();
    if(c==1){ 
        printf("Nom fichier : "); fgets(nom,sizeof(nom),stdin); 
        nom[strcspn(nom,"\n")]=0; 
        lire_fichier(nom);
    }
    else if(c==2){ 
        printf("Nom fichier : "); fgets(nom,sizeof(nom),stdin); 
        nom[strcspn(nom,"\n")]=0;
        printf("Message : "); fgets(message,sizeof(message),stdin); 
        message[strcspn(message,"\n")]=0;
        ecrire_dans_fichier(nom,message);
    }
    else printf("Choix invalide\n");
}

// Les autres exercices restent à compléter
void exercice_4_4(int argc, char* argv[]){ printf("Exercice 4.4 à compléter\n"); }
void exercice_4_5(){ printf("Exercice 4.5 à compléter\n"); }
void exercice_4_6(){ printf("Exercice 4.6 à compléter\n"); }
void exercice_4_7(){ printf("Exercice 4.7 à compléter\n"); }
