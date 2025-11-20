#include<stdio.h>
int main(){

int n,sum=0,i;
printf("Enter number:\n");
scanf("%d",&n);

for (i = 1; i <= 2 * n - 1; i += 2) {
        sum += i;
    }

    printf("Output: %d\n", sum);

return 0;
}


