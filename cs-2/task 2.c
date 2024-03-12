#include <stdio.h>

main()
{
    int a, b, c, d;

    printf("Enter a value of the first number :");
    scanf("%d", &a);
    printf("Enter a value of the second number :");
    scanf("%d", &b);
    printf("Enter a value of the third number :");
    scanf("%d", &c);
    printf("Enter a value of the third number :");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("maximum number is : %d", a);
            }

            else
            {
                printf("maximum number is : %d", d);
            }
        }
        else
        {
            printf("maximum number is : %d", c);
        }
    }

    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("maximum number is : %d", b);
            }

            else
            {
                printf("maximum number is : %d", d);
            }
        }

        else
        {
            if (c > d)
            {
                printf("maximum number is : %d", c);
            }

            else
            {
                printf("maximum number is : %d", d);
            }
        }
    }
}