#include <stdio.h>

int main() {
    FILE *evenFile, *oddFile;
    int num;

    // Open the files for writing
    evenFile = fopen("even_numbers.txt", "w");
    if (evenFile == NULL) {
        printf("Error opening even_numbers.txt for writing.\n");
        return 1;
    }

    oddFile = fopen("odd_numbers.txt", "w");
    if (oddFile == NULL) {
        printf("Error opening odd_numbers.txt for writing.\n");
        fclose(evenFile); // Close the even file if the odd file couldn't be opened
        return 1;
    }

    // Loop through numbers from 50 to 70
    for (num = 50; num <= 70; num++) {
        if (num % 2 == 0) {
            // If the number is even, write it to the even file
            fprintf(evenFile, "%d\n", num);
        } else {
            // If the number is odd, write it to the odd file
            fprintf(oddFile, "%d\n", num);
        }
    }

    // Close the files
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers have been written to even_numbers.txt and odd_numbers.txt.\n");

    return 0;
}
