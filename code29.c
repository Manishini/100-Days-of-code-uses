#include <stdio.h>

int main() {
    int num, i;
    long long factorial = 1;

    printf("Enter a positive integer: ");
    
    
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input or negative number entered.\n");
        return 1;
    }

    
    if (num == 0) {
        printf("Factorial of 0 is 1\n");
    } else {
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}

