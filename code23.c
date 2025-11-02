#include<stdio.h>
int main(){
int late_days;
float fine=0;
printf("Enter the no. of days late:\n");
scanf("%d", &late_days);

if(late_days<=0){
printf("Fine Rs.0\n");
}
else if(late_days<=5){
fine= late_days*2;
printf("Fine Rs.%.0f\n",fine);
}
else if(late_days<=10){
fine= (5*2)+((late_days - 5)* 4);
printf("Fine Rs.%.0f\n",fine);
}
else if(late_days<=30){
fine=(5*2)+(5*4)+((late_days - 10)*6);
printf("Fine Rs.%.0f\n",fine);
}
else{
printf("Membership cancelled");
}
return 0;
}
