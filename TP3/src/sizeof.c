#include <stdio.h>

int main() {
    printf("Taille des types de base et de leurs pointeurs sur cette machine :\n\n");

    printf("Taille de int     : %zu octets\n", sizeof(int));
    printf("Taille de int*    : %zu octets\n", sizeof(int*));
    printf("Taille de int**   : %zu octets\n", sizeof(int**));

    printf("Taille de char*   : %zu octets\n", sizeof(char*));
    printf("Taille de char**  : %zu octets\n", sizeof(char**));
    printf("Taille de char*** : %zu octets\n", sizeof(char***));

    printf("Taille de float*  : %zu octets\n", sizeof(float*));
    printf("Taille de float** : %zu octets\n", sizeof(float**));
    printf("Taille de float***: %zu octets\n", sizeof(float***));

    printf("Taille de double  : %zu octets\n", sizeof(double));
    printf("Taille de double* : %zu octets\n", sizeof(double*));

    printf("Taille de long int : %zu octets\n", sizeof(long int));
    printf("Taille de long long int : %zu octets\n", sizeof(long long int));

    return 0;
}
