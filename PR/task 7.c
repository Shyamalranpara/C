#include <stdio.h>
main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = i; k <= 5; k++)
        {
            printf(" ");
        }
        if (i == 1 || i == 5)
        {
            for (int k = 1; k <= i; k++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int k = 1; k <= i; k++)
            {
                if (k == 1 || k == i)
                {
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}