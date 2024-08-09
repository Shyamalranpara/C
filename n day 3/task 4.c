#include <stdio.h>
#include<conio.h>
int main() {
   int Simple_interest;
   int p,r,n;
 
   printf("Enter The num :");
   scanf("%d",&p);
   printf("Enter The num :");
   scanf("%d",&r);
   printf("Enter The num :");
   scanf("%d",&n);

   Simple_interest = (p*r*n);
   printf("The area of the given rectangle is %d", Simple_interest/100);
   return 0;
}