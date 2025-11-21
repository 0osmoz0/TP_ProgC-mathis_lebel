#include <stdio.h>

int main() {

    // Char
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    // Short
    short s = -12345;
    signed short ss = -12345;
    unsigned short us = 54321;

    // Int
    int i = -123456;
    signed int si = -123456;
    unsigned int ui = 4000000000U;

    // Long int
    long int li = -1234567890L;
    signed long int sli = -1234567890L;
    unsigned long int uli = 4000000000UL;

    // Long long int
    long long int lli = -123456789012345LL;
    signed long long int slli = -123456789012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    // Float
    float f = 3.14f;

    // Double
    double d = 3.14159265359;

    // Long double
    long double ld = 3.141592653589793238L;

    // Affichage des valeurs
    printf("char: %c\nsigned char: %d\nunsigned char: %u\n\n", c, sc, uc);
    printf("short: %d\nsigned short: %d\nunsigned short: %u\n\n", s, ss, us);
    printf("int: %d\nsigned int: %d\nunsigned int: %u\n\n", i, si, ui);
    printf("long int: %ld\nsigned long int: %ld\nunsigned long int: %lu\n\n", li, sli, uli);
    printf("long long int: %lld\nsigned long long int: %lld\nunsigned long long int: %llu\n\n", lli, slli, ulli);
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);

    return 0;
}
