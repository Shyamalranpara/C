#include <stdio.h>
#include<conio.h>
int main() {
   int rectangle;
   int length,width;
 
   printf("Enter The area of rectangle length :");
   scanf("%d",&length);
   printf("Enter The area of rectangle width :");
   scanf("%d",&width);

   rectangle = (length * width);
   printf("The area of the given rectangle is %d", rectangle);
   return 0;
}