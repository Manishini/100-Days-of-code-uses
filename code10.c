//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){

long  t;

printf("Enter total time in seconds:\n");
scanf("%ld",&t);

long Hours = t/3660;

long Minutes = (t%3600)/60;

long Seconds = t%60;

printf("Output : %ld:%ld:%ld\n", Hours,Minutes,Seconds);

return 0;
}

