
#include <stdio.h>
main(){
    int k=1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = i; j <= 5; j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}   
