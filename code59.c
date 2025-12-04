#include <stdio.h>

int main() {
    int n, i;
    int countEven = 0;
    int countOdd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        // Check if the remainder when divided by 2 is 0 (even) or 1 (odd)
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    printf("Even=%d, Odd=%d\n", countEven, countOdd);

    return 0;
}

