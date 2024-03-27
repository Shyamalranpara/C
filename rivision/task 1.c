#include <stdio.h>

main()
{

    int  num,ans; 
    printf("Enter the number :");
    scanf("%d",&num);

    for(int i=2; i<num; i++)
    {
        ans = num%i;
        if(ans == 0){
            break;
        }
    }

    if (ans!=0)
    {
          printf("A prime number is : %d\n",num); 
    }

    else
    {
          printf("This is not prime number.\n"); 
    }
   main();
}