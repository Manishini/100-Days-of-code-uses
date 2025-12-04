#include <stdio.h>

int main() {
    int arr[100]; // Declare an array to hold up to 100 elements
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are: ");
    
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

