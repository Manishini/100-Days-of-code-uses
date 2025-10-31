//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
#include<ctype.h>
int main(){

char f;
printf("Enter any character:\n");
scanf("%c",&f);

if(isupper(f)){
printf("Uppercase alphabet");
}

else if(islower(f)){
printf("Lowercase");
}
else if(isdigit(f)){
printf("Digit");
}
else
printf("Special character");

return 0;
}
