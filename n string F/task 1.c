#include<stdio.h>
#include<string.h>
main(){
    char name_1[100],name_2[100]="@gmail.com";
    printf("Create your password: ");
    gets(name_1);
    /* printf("Your email Id is: "); */
    puts(strcat(strlwr(name_1),name_2));
    for (int i = 1; i < 47; ++i) {
        putchar(i);
       
       
    if (33 >= 47)
    {
        printf("your password is strong.");
    }
    else{
        printf("your password is not strong.");
    }
    }
   
  return 0;
}
