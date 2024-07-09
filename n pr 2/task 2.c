#include<stdio.h>
int main(){

    int A;
    printf("Please enter your score: ");
    scanf("%d\n ", &A);

    switch (A)
    {

        case 1:
            (A >= 90);
            printf("Your grade is A. Excellent work!");
            break;

        case 2:
            (A >= 80);
            printf("Your grade is B. Well Done!");
            break;

        case 3:
            (A >= 70);
            printf("Your grade is C.Good job!");
            break;

        case 4:
            (A >= 60);
            printf("Your grade is D.You Passed, but you could do better!");
            break;

        case 5:
            (A < 60);
            printf("Your grade is F.Sorry, you failed!");
            break;
    }
}

