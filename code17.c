//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>
int main(){
float  a,b,c,D,r1,r2,real,imag;

printf("Enter the coefficients a,b,and c:\n");
scanf("%f%f%f",&a,&b,&c);

D = b*b - 4*a*c;
if(D>0){
r1= (-b+ sqrt(D))/(2*a);
r2= (-b - sqrt(D))/(2*a);
printf("The roots are real and distinct:%.2f and %.2f\n",r1,r2);
}

else if(D==0){
r1=r2= -b/(2*a);
printf("Roots are real and equal:%.2f and %.2f",r1,r2);
}
else
{
real = -b/(2*a);
imag = sqrt(-D)/(2*a);
printf("Roots are complex:%.2f+%.2f and %.2f-%.2f",real,imag,real,imag);
}

return 0;
}
