//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){

int year;
printf("Enter a year:\n");
scanf("%d",&year);

if(year%4==0 && year%100 != 0){
printf("Leap year");
}
else if(year%400==0){
printf("Leap year");
}

else if(year%100==0){
printf("Not a leap year");
}

else 
printf("Not leap year");

return 0;
}
