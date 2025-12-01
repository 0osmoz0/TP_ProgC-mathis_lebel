#include <stdio.h>

int factorielle(int n){
    if(n==0) return 1;
    return n*factorielle(n-1);
}

int main(){
    int n;
    printf("Entrez un entier : "); scanf("%d",&n);
    printf("%d! = %d\n", n, factorielle(n));
    return 0;
}
