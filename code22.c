#include<stdio.h>
#include<math.h>
int main(){
float cost_price, selling_price, profit, loss, percentage;

printf("Enter the cost price:\n");
scanf("%f",&cost_price);
printf("Enter the selling price:\n");
scanf("%f", &selling_price);

if(cost_price!=0 && selling_price>=cost_price){
profit=selling_price - cost_price;
percentage=(profit/cost_price)*100;
printf("It is a profit of %.2f\n",profit);
printf("The profit percentage is:%.2f%%",percentage);
}
else{
if(cost_price!=0){
loss=cost_price - selling_price;
percentage=(loss/cost_price)*100;
printf("It is a loss of %.2f",loss);
printf("The loss percentage is :%.2f%%",percentage);
}
}

return 0;
}
 

