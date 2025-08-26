#include<stdio.h>
int main (){
    int a,b,c,d,e,f;
    printf("Input 1 :");
    scanf("%d%d",&b,&c);
    a=b+c;
    printf("Output 1 :\n");
    printf("Sum = %d, ",a);
    d=a-b;
    printf("Difference =%d, ",d);
    e=a*b;
    printf("Product =%d, ",e);
    f=a/b;
    printf("Quotient =%d ",f);
    return 0;

}