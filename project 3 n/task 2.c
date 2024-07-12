#include<stdio.h>

main(){
    int l,j=0;

    printf("enter any number:");
    scanf("%d",&l);

    for (int i=0; i<=10 ; i++)
    {
        
      if (l==0)
      {
        break;
      }
      l/=10;
      j++;
       
    }
    
     printf("print the total num:%d",j);

}