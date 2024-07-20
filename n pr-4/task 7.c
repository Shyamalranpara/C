#include <stdio.h>
main(){
  int i,j;

  for (int i = 1; i <=7; i++)
  {
    for (int j = 1; j <=5; j++)
    {
      if (j==1 || (i==1 && j<5) || (i==4 && j<5) || (j==5&& i>1&&i<4))
      {
        printf("* ",j);
      }
      else{
        printf("  ");
      }
    }
     printf("\n");
  }
  
   
}