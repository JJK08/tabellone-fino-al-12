#include <stdio.h>

int main() {
    int i;
    int j;
    printf("Tabellone fino a 12:\n");
    printf("  +");
    for (i = 1; i <= 12; i++) {
        printf("-----");
    }
    printf("\n   |");
    for (i = 1; i <= 12; i++) {
        printf("%4d|", i);
    }
    printf("\n  -");
    for (i = 1; i <= 12; i++) {
        printf("-----");
    }
    printf("\n");

    for (i = 1; i <= 12; i++) {
        printf("%2d |", i);
        for (j = 1; j <= 12; j++) {
            printf("%4d|", i * j);
        }
        printf("\n  -");
        for (j = 1; j <= 12; j++) {
            printf("-----");
        }
        printf("\n");
    }

    return 0;
}
