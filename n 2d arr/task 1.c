#include <stdio.h>
main()
{
    int size;
    float sum = 0.00;
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
            sum += arr[i][j];
        }
    }
    printf("size of arr: %d\n", size*size);
    printf("sum of arr : %0.2f\n", sum);
    printf("average of arr : %0.2f\n", sum / size);
    main();
<<<<<<< HEAD
}
=======
}
>>>>>>> 2ab6b2769d620eaccb3ba2fa82398cb7666d32f3
