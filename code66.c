#include <stdio.h>

int main() {
    int n, element, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Find the correct position for the new element
    pos = n; 
    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = element;

    printf("Output: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

