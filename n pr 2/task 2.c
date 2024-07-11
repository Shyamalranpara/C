#include<stdio.h>
int main(){

    int score;
    printf("Please enter your score: ");
    scanf("%d", &score);

    switch (score)
    {

        case 1:
            (score >= 90);
            printf("Your grade is A. Excellent work!");
            break;

        case 2:
            (score >= 80);
            printf("Your grade is B. Well Done!");
            break;

        case 3:
            (score >= 70);
            printf("Your grade is C.Good job!");
            break;

        case 4:
            (score >= 60);
            printf("Your grade is D.You Passed, but you could do better!");
            break;

        case 5:
            (score < 60);
            printf("Your grade is F.Sorry, you failed!");
            break;
    }
}

