#include<stdio.h>
int main(){
    int size;
    printf("length of an arr: ");
    scanf("%d",&size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter number for arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    main();
}