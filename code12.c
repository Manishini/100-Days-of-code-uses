//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
int n;
printf("Enter an integer:\n");
scanf("%d",&n);

if(n>0){
printf("Positive");
}
else if(n<0){
printf("Negetive");
}

else{
printf("Zero");
}

return 0;
}


