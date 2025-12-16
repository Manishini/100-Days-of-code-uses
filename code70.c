#include <stdio.h>

int main() {
    int n, k, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n], result[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k(No. of rotations): ");
    scanf("%d", &k);

    k = k % n; // Ensure k is within array bounds

    for (i = 0; i < n; i++) {
        // (i + k) % n calculates the new position after rotation
        result[(i + k) % n] = arr[i];
    }

    printf("Output: ");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

