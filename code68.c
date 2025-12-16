#include <stdio.h>

int main() {
    int n, pos, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to delete: ");
    scanf("%d", &pos);

    // Shift elements to the left to overwrite the element at 'pos'
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Output: ");
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

