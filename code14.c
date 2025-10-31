#include<stdio.h>
int main(){

char alpha;
printf("Enter an alphabet or word:\n");

scanf("%c",&alpha);

if(alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')

printf("Vowel");

else
printf("Consonant");

return 0;
}
