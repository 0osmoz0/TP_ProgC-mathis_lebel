#include <stdio.h>
#include <stdint.h> // pour uintptr_t

int main() {
    // Déclaration des variables
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678abcdef00;
    long long int lli = 0x1234567890abcdef;
    float f = 3.14f;
    double d = 6.28;
    long double ld = 9.42L;

    // Déclaration des pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n\n");

    // Affichage des adresses et valeurs en hexadécimal
    printf("Adresse de c  : %p, Valeur de c  : 0x%02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur de s  : 0x%04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur de i  : 0x%08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : 0x%016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur de lli: 0x%016llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f  : %p, Valeur de f  : 0x%08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur de d  : 0x%016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : (non portable)\n\n", (void*)pld);

    // Manipulation des variables via pointeurs
    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0x87654321;
    *pli = 0xfedcba9876543210;
    *plli = 0xfedcba0987654321;
    *pf = 1.5f;
    *pd = 2.5;
    ld = 3.5L; // pas facilement manipulable par pointeur portable

    printf("Après manipulation :\n\n");

    printf("Adresse de c  : %p, Valeur de c  : 0x%02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s  : %p, Valeur de s  : 0x%04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i  : %p, Valeur de i  : 0x%08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de li : %p, Valeur de li : 0x%016lx\n", (void*)pli, (unsigned long)li);
    printf("Adresse de lli: %p, Valeur de lli: 0x%016llx\n", (void*)plli, (unsigned long long)lli);
    printf("Adresse de f  : %p, Valeur de f  : 0x%08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d  : %p, Valeur de d  : 0x%016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : (non portable)\n", (void*)pld);

    return 0;
}
