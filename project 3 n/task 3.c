#include<stdio.h>
int main(){
    int first,last,sum=0,n;

    printf("the sum of first digit and last digit: ");
    scanf("%d",&n);

    last=n % 10;

   do
   {
    n= n /= 10;
   } while (n>=10);
   
   first=n;
   sum = first + last;
    printf("Sum of first digit and last digit = %d", sum);
    
    
}