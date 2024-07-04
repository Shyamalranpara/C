#include <stdio.h>

main()
{
    int size;
    printf("Enter the number : ");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number for arr: ",i);
        scanf("%d\n",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
  for (int i = 0; i < size; i++)
  {
    if (arr[i]<0)
    {
       printf("%d\n",arr[i]);
    }

  }
    main();
}