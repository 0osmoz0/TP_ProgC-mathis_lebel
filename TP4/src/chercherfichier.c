#include <stdio.h>
#include <string.h>

int main(){
    char nom[100], phrase[256];
    printf("Nom fichier : "); fgets(nom,sizeof(nom),stdin); nom[strcspn(nom,"\n")]=0;
    printf("Phrase à chercher : "); fgets(phrase,sizeof(phrase),stdin); phrase[strcspn(phrase,"\n")]=0;
    FILE* f=fopen(nom,"r");
    if(!f){ printf("Impossible d'ouvrir fichier\n"); return 1;}
    char ligne[512]; int numL=1;
    while(fgets(ligne,sizeof(ligne),f)){
        int count=0;
        char* p=ligne;
        while((p=strstr(p,phrase))){ count++; p++; }
        if(count>0) printf("Ligne %d, %d fois\n", numL, count);
        numL++;
    }
    fclose(f);
    return 0;
}
