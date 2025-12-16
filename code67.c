#include <stdio.h>

int main() {
    int n, pos, val, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &val);

    // Shift elements to the right to make a gap at 'pos'
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the value at the target position
    arr[pos] = val;

    printf("Output: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

