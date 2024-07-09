#include<stdio.h>
int main()
{

    int A;
    printf("Please enter your score: ");
    scanf("%d", &A);

    if(A>=90)
    {
        printf("Your grade is A. Excellent work! You are eligible for the next level.");
    }
    else if(A>=80)
    {
        printf("Your grade is B. Well Done!");
    }
    else if(A>=70)
    {
          printf("Your grade is C. Well Done!");
    }
    else if(A>=60)
    {
        printf("Your grade is D. Well Done!");
    }
    else{
        printf("Please try again next time if the grade is F");
    }
}

