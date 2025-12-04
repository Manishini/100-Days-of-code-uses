#include <stdio.h>

int main() {
    int rows = 4;
    int i, j, spaces;

    for (i = 1; i <= rows; i++) {
        spaces = rows - i;
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--) {
        spaces = rows - i;
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

