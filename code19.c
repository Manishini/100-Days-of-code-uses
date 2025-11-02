#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the three sides of the triangle:\n");
scanf("%d%d%d",&a,&b,&c);

if(a==b && b==c){
printf("Equilateral");
}
else if(a==b && b!=c){
printf("Isosceles");
}
else if(a!=b && b!=c){
printf("Scalene");
}
return 0;
}
