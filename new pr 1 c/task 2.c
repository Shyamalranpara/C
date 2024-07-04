#include <stdio.h>

int main()
{
    float grosssalary , HRA, DA, TA,basesalary;

    printf("enter the basesalary :");
    scanf("%f",&basesalary);
     printf("enter the HRA :");
    scanf("%f",&HRA);
     printf("enter the DA :");
    scanf("%f",&DA);
     printf("enter the TA :");
    scanf("%f",&TA);
    
    grosssalary = basesalary +(basesalary*HRA/100)+(basesalary*DA/100)+(basesalary*TA/100);
    printf("grossalary: RS.%.2f\n",grosssalary);

    return 0;
}
