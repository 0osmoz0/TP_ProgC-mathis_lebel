#include <stdio.h>

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 3.1415926f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    unsigned char *p;
    int j;

    // Affichage des octets de short
    printf("Octets de short :\n");
    p = (unsigned char*)&s;
    for (j = 0; j < sizeof(s); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de int
    printf("Octets de int :\n");
    p = (unsigned char*)&i;
    for (j = 0; j < sizeof(i); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long int
    printf("Octets de long int :\n");
    p = (unsigned char*)&li;
    for (j = 0; j < sizeof(li); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de float
    printf("Octets de float :\n");
    p = (unsigned char*)&f;
    for (j = 0; j < sizeof(f); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de double
    printf("Octets de double :\n");
    p = (unsigned char*)&d;
    for (j = 0; j < sizeof(d); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long double
    printf("Octets de long double :\n");
    p = (unsigned char*)&ld;
    for (j = 0; j < sizeof(ld); j++) {
        printf("%02x ", p[j]);
    }
    printf("\n");

    return 0;
}
