#include <stdio.h>

int main() {
    int n;
    int U0 = 0, U1 = 1;
    
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n doit être un entier positif.\n");
        return 1;
    }

    printf("Suite de Fibonacci jusqu'à U%d :\n", n);

    if (n == 0) {
        printf("%d\n", U0);
        return 0;
    }

    printf("%d, %d", U0, U1);

    int i, Un;
    for (i = 2; i <= n; i++) {
        Un = U0 + U1;   // calcul du terme suivant
        printf(", %d", Un);

        U0 = U1;        // décalage
        U1 = Un;
    }

    printf("\n");

    return 0;
}
