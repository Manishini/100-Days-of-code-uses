//Q8: Write a program to find and display the sum of the first n natural numbers.


#include<stdio.h>
int main(){

    int n,sum=0;
int i=0;
    printf("Enter a positive integer:");
scanf("%d",&n);
if(n<1){
printf("Invalid input! Please enter a natural number,\n");
return 1;
}

while(i<=n){
sum+=i;
i++;
}
printf("The sum of first %d natural numer is:%d", n,sum);

return 0;
}
