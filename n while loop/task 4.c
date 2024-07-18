#include <stdio.h>

int main() {
  int i=1;
  int n;


  printf("Enter the value of N: ");
  scanf("%d", & n);

  while (i <= n) {
    if (i % 2 != 0)
      printf("%d\n", i);
    i++;
  }

}
