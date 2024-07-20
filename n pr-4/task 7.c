
#include <stdio.h>
main(){
   for (int i = 1; i <=5; i++)
   {
    for (int j = 1; j >= 5; j++)
    {
      printf(" ");
    }
    for (int k = 5; k >= i; k--)
    {
         printf("*  ",k);
    }
    printf("\n");
   }
   
}