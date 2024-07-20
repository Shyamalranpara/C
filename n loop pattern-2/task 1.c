#include<stdio.h>
int main(){
     printf(" ");
    for (int i = 1; i <=5; i++)
    {

       for (int j = i; j >=1; j--)
       {
        for (int k = 1; k <=5; k++)
        {
            printf("%d",k);
        }
        
       }
       printf("\n");
    }
    
}