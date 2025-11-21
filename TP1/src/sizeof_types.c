#include <stdio.h>

int main() {

    printf("Tailles des types de base en C (en octets) :\n\n");

    // char
    printf("char : %lu\n", sizeof(char));
    printf("signed char : %lu\n", sizeof(signed char));
    printf("unsigned char : %lu\n\n", sizeof(unsigned char));

    // short
    printf("short : %lu\n", sizeof(short));
    printf("signed short : %lu\n", sizeof(signed short));
    printf("unsigned short : %lu\n\n", sizeof(unsigned short));

    // int
    printf("int : %lu\n", sizeof(int));
    printf("signed int : %lu\n", sizeof(signed int));
    printf("unsigned int : %lu\n\n", sizeof(unsigned int));

    // long int
    printf("long int : %lu\n", sizeof(long int));
    printf("signed long int : %lu\n", sizeof(signed long int));
    printf("unsigned long int : %lu\n\n", sizeof(unsigned long int));

    // long long int
    printf("long long int : %lu\n", sizeof(long long int));
    printf("signed long long int : %lu\n", sizeof(signed long long int));
    printf("unsigned long long int : %lu\n\n", sizeof(unsigned long long int));

    // float
    printf("float : %lu\n\n", sizeof(float));

    // double
    printf("double : %lu\n\n", sizeof(double));

    // long double
    printf("long double : %lu\n\n", sizeof(long double));

    return 0;
}
