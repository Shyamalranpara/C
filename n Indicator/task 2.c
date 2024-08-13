#include <stdio.h>

#define ROWS 2
#define COLS 2


void cubeElements(int (*arr)[COLS], int rows, int cols);

int main() {
    int array[ROWS][COLS];

    printf("Enter the elements for a %dx%d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nOriginal array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    cubeElements(array, ROWS, COLS);

    printf("\nArray after cubing elements:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void cubeElements(int (*arr)[COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = arr[i][j] * arr[i][j] * arr[i][j];
        }
    }
}
