//Q7: Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main(){
int a,b;
printf("Input 1:\nEnter two numbers before swapping:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("Output 1:\nAfter swapping the value of a is:%d and b is :%d",a,b);
return 0;
}
