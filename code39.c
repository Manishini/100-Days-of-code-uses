#include <stdio.h>

int main() {
    long long n;
    int digit;
    long long product_odd = 1; 

    printf("Enter an integer: ");
    scanf("%lld", &n);

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
         printf("Product of odd digits: %lld\n", product_odd);
         return 0;
    }

    while (n != 0) {
        digit = n % 10;
        
        if (digit % 2 != 0) {
            product_odd *= digit;
        }
        
        n /= 10;
    }

    printf("Product of odd digits: %lld\n", product_odd);

    return 0;
}

