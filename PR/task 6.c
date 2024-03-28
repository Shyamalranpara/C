#include <stdio.h>
main()
{
    for (int i = 1; i <= 6; i++)
    {
        if (i == 1 || i == 6)
        {
            for (int j = 1; j <= 5; j++)
            {
                printf(" *");
            }
        }
        else
        {
            for (int k = 1; k <= 5; k++)
            {
                if (k == 1 || k==5)
                {
                    printf(" *");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}