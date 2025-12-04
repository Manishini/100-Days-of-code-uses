#include <stdio.h>

int main() {
    char binaryNum[32];
    int i = 0;

    printf("Enter a binary number (string of 0s and 1s): ");
    scanf("%s", binaryNum);

    printf("1's complement: ");

    while (binaryNum[i] != '\0') {
        if (binaryNum[i] == '0') {
            printf("1");
        } 
        else if (binaryNum[i] == '1') {
            printf("0");
        }
        
        i++;
    }

    printf("\n");

    return 0;
}

