#include <stdio.h>
main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = i; j <= 4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = i; j <= 4; j++)
        {
            printf("* ");
        }
        printf("\n");
    }  
}