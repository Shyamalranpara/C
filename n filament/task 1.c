#include <stdio.h>

// Function to find the length of the string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to check if the string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = stringLength(str) - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];

    // Prompt the user for input
    printf("Enter any string: ");
    scanf("%s", str);

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("The string '%s' is a palindrome.\n", str);
    } else {
        printf("The string '%s' is not a palindrome.\n", str);
    }

    return 0;
}
