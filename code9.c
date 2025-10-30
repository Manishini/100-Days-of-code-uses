//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main() {
float p,r,t;
int n=4;
printf("Enter the Prnicipal amount , Rate(in decimal) and Time(in years) :\n");
scanf("%f%f%f",&p,&r,&t);

float Simple_interest= (p*r*t)/100;
float amount = p*pow((1+r/n),n*t);

float Compound_interest= amount - p ;

printf("The Simple Interest is :%f\n ", Simple_interest);
printf("The Compounf Interest is :%f\n", Compound_interest);

return 0;
}
 


