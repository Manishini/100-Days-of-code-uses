#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        sum += (double)numerator / denominator;
        
        // Update numerator (increases by 2 each time: 2, 4, 6, ...)
        numerator += 2; 
        
        // Update denominator (increases by 4 each time: 3, 7, 11, ...)
        denominator += 4;
    }

    printf("Approximate sum: %lf\n", sum);

    return 0;
}

