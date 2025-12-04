#include <stdio.h>
#include <string.h>

int main() {
    char numStr[100];
    int length;
    char temp;

    printf("Enter an integer: ");
    scanf("%s", numStr);

    length = strlen(numStr);

    if (length > 1) {
        temp = numStr[0];
        numStr[0] = numStr[length - 1];
        numStr[length - 1] = temp;
    }

    printf("Number after swapping first and last digit: %s\n", numStr);

    return 0;
}

