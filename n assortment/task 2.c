#include <stdio.h>
main()
{
    int size,large = 0 ;
    printf("Enter row_size of 2d array : ");
    scanf("%d", &size);

    printf("Enter column_size of 2d array : ");
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
            if (arr[i][j] > large)
            {
                large = arr[i][j];
            }
        }
    }
    printf("The largest element is: %d\n",large);
    main();
}
