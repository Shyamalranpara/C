#include <stdio.h>
#include<conio.h>
int main() {
   float Simple_interest;
   int p,r,n;
 
   printf("Enter The num :");
   scanf("%d",&p);
   printf("Enter The num :");
   scanf("%d",&r);
   printf("Enter The num :");
   scanf("%d",&n);

   Simple_interest = (p*r*n);
   printf("The area of the given rectangle is %.2f", Simple_interest/100);
   return 0;
}