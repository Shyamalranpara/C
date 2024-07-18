#include <stdio.h>

int main() {
  int i;
  int n;


  printf("Enter the first number: ");
  scanf("%d", & n);

 printf("Enter the second number: ");
 scanf("%d", & n);


  while (i >= n) {
      if (i % 4 != 0)
    printf("%d\n", i);
    i++;
  }

}
