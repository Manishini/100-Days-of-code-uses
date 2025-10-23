#include<stdio.h>
int main(){
    
int number ; int positive_count= 0; int negetive_count = 0; int zero_count = 0;
do {
    printf("Enter number:\n");
    scanf("%d", &number);

    if(number>0){
        positive_count++;
         }
else if(number<0){
    negetive_count++;
}
else if(number==0){
    zero_count++;
}
}
while(number!=0)
zero_count--;

printf("The count of positive numbers is :%d", positive_count);
printf("The count of negetive numbers is: %d", negetive_count);
printf("The count of zero : %d", zero_count);


    


   return 0;
}