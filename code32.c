#include <stdio.h>

int main() {
    int n, reversed = 0, r, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNum = n;

    while (n != 0) {
        r = n % 10;
        reversed = reversed * 10 + r;
        n /= 10;
    }

    if (originalNum == reversed) {
        printf("%d is Palindrome\n", originalNum);
    } else {
        printf("%d is Not palindrome\n", originalNum);
    }

    return 0;
}

