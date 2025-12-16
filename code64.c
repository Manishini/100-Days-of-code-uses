#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int i, rem, max_freq = 0, result = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // If number is 0, handle it separately
    if (num == 0) {
        freq[0]++;
    }

    // Convert negative number to positive
    if (num < 0) num = -num;

    // Count frequency of each digit
    while (num > 0) {
        rem = num % 10;
        freq[rem]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for (i = 0; i <= 9; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            result = i;
        }
    }

    printf("Output: %d\n", result);

    return 0;
}

