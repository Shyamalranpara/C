#include <stdio.h>
void calculateCube(int n1){
    printf("cube of two numbers: %d\n",n1*n1*n1);
}
void main(){
    int n1 , n2;
    printf("Enter any number: ");
    scanf("%d",&n1);
    calculateCube(n1);
    main();
}   