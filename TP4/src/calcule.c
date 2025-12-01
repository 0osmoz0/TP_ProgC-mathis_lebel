#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char* argv[]){
    if(argc!=4){ printf("Usage: %s <op> <num1> <num2>\n",argv[0]); return 1; }
    char op=argv[1][0];
    int a=atoi(argv[2]);
    int b=atoi(argv[3]);
    int res;
    switch(op){
        case '+': res=somme(a,b); break;
        case '-': res=difference(a,b); break;
        case '*': res=produit(a,b); break;
        case '/': res=quotient(a,b); break;
        case '%': res=modulo(a,b); break;
        case '&': res=et(a,b); break;
        case '|': res=ou(a,b); break;
        case '~': res=negation(a); break;
        default: printf("Opérateur invalide\n"); return 1;
    }
    printf("Résultat : %d\n", res);
    return 0;
}
