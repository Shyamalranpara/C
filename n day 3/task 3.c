#include <stdio.h>
#include<conio.h>
int main() {
   int triangle;
   int b,h;
 
   printf("Enter The area of rectangle length :");
   scanf("%d",&b);
   printf("Enter The area of rectangle width :");
   scanf("%d",&h);

   triangle = 1/2(b*h);
   printf("The area of the given rectangle is %d", triangle);
   return 0;
}