     #include<stdio.h>
     #include<math.h>     //Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
     int main() {
     int a,b;
     
     printf("Input 1:\n");
     scanf("%d %d",&a, &b);
     printf("Enter length and breadth : %d %d\n",a,b);
     int area = a*b;
     int perimeter = 2*(a+b);
     printf("Output 1:\n");
     printf("Area of the rectangle is:%d\n",area);
     printf("Perimeter of the rectangle is:%d\n",perimeter);


     return 0;
        }