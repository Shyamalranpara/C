#include <stdio.h>
main()
{
    int size ,sum;
    printf("Enter size of 2d array : ");
    scanf("%d", &size);
    int arr[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++){
            printf("Enter number for arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++){
            if (j == i)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("size of arr: %d\n", size*size);
    printf("sum of arr : %d\n", sum);
    main();
} 
