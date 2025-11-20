#include<stdio.h>
int main(){
int a,b,result;
char choice;
printf("Enter two numbers:\n");
scanf("%d %d",&a,&b);

printf("Enter your choice of operator:\n");
scanf(" %c",&choice);

switch(choice){
case '+':
result=a+b;
printf("Output:%d\n",result);
break;

case '-':
result=a-b;
printf("Output:%d\n",result);
break;
 
case '*':
  result = a*b;
  printf("Output: %d\n", result);
   break;
   
case '/':
 if (b == 0) {
                printf("Error: Division by zero.\n");
                return 1; 
            }
            result =a/b;
            printf("Output: %d\n", result);
            break;
   case '%':
   if (b == 0) {
                printf("Error: Modulo by zero.\n");
                return 1; 
            }
            result = a % b;
            printf("Output: %d\n", result);
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;
    }

    return 0;
}


