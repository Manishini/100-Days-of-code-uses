#include <stdio.h>

int main() {
    int n, i;
    int countPositive = 0;
    int countNegative = 0;
    int countZero = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            countPositive++;
        } else if (arr[i] < 0) {
            countNegative++;
        } else {
            countZero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d\n", countPositive, countNegative, countZero);

    return 0;
}


