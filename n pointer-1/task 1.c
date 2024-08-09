#include <stdio.h>

int main()
{
    int *ptr,arr[5] = { 2, 4, 1, 3, 7 };
    int i = 0;

    printf("Array elements: ");
    for (i = 0; i < 5; i++)
        scanf("%d",&arr[i],*ptr);
    
    *ptr=arr[i]; 
    
    printf("\nSquare of array elements: \n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i] * arr[i],*ptr);
    printf("\n");

    return 0;
}
