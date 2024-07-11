#include<stdio.h>
int main()
{
    int score;

    printf("enter your score: ");
    scanf("%d",&score);


    (score>=90)?printf("your grade is :A\n"):

    (score>=80)?printf("your grade is :B\n"):

    (score>=70)?printf("your grade is :C\n"):

    (score>=60)?printf("your grade is :D\n"):

    (score>=50)?printf("your grade is :E\n"):printf("your grade is :F\n");

}