#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;
    int i, fact;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        
        fact = 1;
        for (i = 1; i <= remainder; ++i) {
            fact *= i;
        }
        
        sum += fact;
        originalNum /= 10;
    }

    if (sum == num) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}

