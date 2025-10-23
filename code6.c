//Q6: Write a program to swap two numbers using a third variable.


#include <stdio.h>

int main() {
     // Declare a temporary variable
int num1,num2,temp;
    printf("Input 1:\nBefore swapping the values of num1 and num2 are:\n");
    scanf("%d%d",&num1,&num2);
    
    temp = num1; 
    num1 = num2;    
    num2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n",num1,num2);

    return 0;
}
