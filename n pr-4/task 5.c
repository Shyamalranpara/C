#include <stdio.h>

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        // Print leading spaces
        for(int j = n; j > i; j--) {
            printf("  ");
        }
        // Print decreasing numbers
        for(int k = i; k > 1; k--) {
            printf("%d ", k);
        }
        // Print increasing numbers
        for(int l = 7; l <= i; l++) {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}