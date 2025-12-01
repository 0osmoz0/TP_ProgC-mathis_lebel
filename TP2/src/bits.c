#include <stdio.h>

int main() {
    int d = 0x10001000;  // Exemple : ajustez la valeur pour vos tests
    
    int bit4  = (d >> (31 - 3)) & 1;   // 4ème bit de gauche → position 28
    int bit20 = (d >> (31 - 19)) & 1;  // 20ème bit de gauche → position 12

    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
