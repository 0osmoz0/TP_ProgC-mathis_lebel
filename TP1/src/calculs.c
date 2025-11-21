#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '+';

    int resultat; // pour stocker le résultat des opérations
    int resultat_bit; // pour les opérations bit à bit
    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : division par zero!\n");
            }
            break;

        case '%':
            if (num2 != 0) {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            } else {
                printf("Erreur : modulo par zero!\n");
            }
            break;

        case '&':
            resultat_bit = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat_bit);
            break;

        case '|':
            resultat_bit = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat_bit);
            break;

        case '~':
            // L'opérateur NOT (~) ne prend qu'un seul opérande
            resultat_bit = ~num1;
            printf("~%d = %d\n", num1, resultat_bit);
            break;

        default:
            printf("Operateur inconnu: %c\n", op);
            break;
    }

    return 0;
}

