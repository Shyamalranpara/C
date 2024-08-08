#include <stdio.h>

int main()
{
    int *ptr1,*ptr2,x,y,temp;

    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);


    ptr1=&x;
    ptr2=&y;

temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;

 printf("\nafter swapping x = %d and y = %d", x, y);
    return 0;
}

