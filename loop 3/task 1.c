#include<stdio.h>

main(){
    int n,l=1;

    printf("print the factorial:");
    scanf("%d",&n);

    for (int i=1; i <=n; i++)
    {
        printf("%d\n",l=l+i);
    }
    
}