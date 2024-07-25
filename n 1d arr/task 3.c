#include <stdio.h>

#define MAX_SIZE 100 // Maximum size for the arrays

int main() {
    int size;
    int array1[MAX_SIZE], array2[MAX_SIZE], result[MAX_SIZE];

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    // Input elements of array1
    printf("Enter elements of array1:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Input elements of array2
    printf("Enter elements of array2:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Perform addition and store in result array
    for (int i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
    }

    // Display the result array
    printf("Resultant array after addition:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
