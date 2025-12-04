#include <stdio.h>

int main() {
    int rows = 5; 
    int i, j;
    int num_stars;

    // Upper half (rows 1 to 5, stars 1, 3, 5, 7, 9)
    for (i = 1; i <= rows; i++) {
        num_stars = 2 * i - 1;
        for (j = 0; j < num_stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (rows 4 down to 1, stars 7, 5, 3, 1)
    for (i = rows - 1; i >= 1; i--) {
        num_stars = 2 * i - 1;
        for (j = 0; j < num_stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


