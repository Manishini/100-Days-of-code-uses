#include<stdio.h>
int main(){
int n,i;

long product=1;
printf("Enter a number:");
scanf("%d",&n);

for(i=2;i<=n;i+=2){
product *=i;
}
printf("Output: %ld\n",product);
return 0;
}
