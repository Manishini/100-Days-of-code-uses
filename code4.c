Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main(){
    float r;
    float pi=3.14159;
    printf("Input 1:\n Enter the radius: ");
    scanf("%d",&r);
    float  Area = pi*r*r;
    float Circumf= 2*pi*r;
    printf("AREA OF A CIRCLE :%f\n CIRCUMFERENCE OF A CIRCLE:%f",Area,Circumf);
    return 0;

}