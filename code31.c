#include <stdio.h>

int main() {
    int n, binaryNum[32], i = 0, j;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }
    
    int original_n = n;

    while (n > 0) {
        binaryNum[i] = n % 2; 
        n = n / 2;
        i++;
    }

    printf("Binary representation of %d is: ", original_n);

    for (j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    
    printf("\n");

    return 0;
}

