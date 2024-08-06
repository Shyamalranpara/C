#include <stdio.h>
#include <stdbool.h>

bool is_strong_password(const char *password) {
    int length = 0;
    bool has_letter = false;
    bool has_digit = false;
    bool has_special = false;

    // Iterate over each character in the password
    while (password[length] != '\0') {
        char ch = password[length];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            has_letter = true;
        } else if (ch >= '0' && ch <= '9') {
            has_digit = true;
        } else if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) ||
                   (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
            has_special = true;
        }
        length++;
    }

    // Check if the length is at least 6 and all conditions are met
    return (length >= 6) && has_letter && has_digit && has_special;
}

int main() {
    char password[100]; // Buffer to store the input password

    // Prompt user for input
    printf("Enter a password to check: ");
    fgets(password, sizeof(password), stdin);

    // Remove newline character if present
    size_t len = 0;
    while (password[len] != '\0') {
        len++;
    }
    if (len > 0 && password[len - 1] == '\n') {
        password[len - 1] = '\0';
    }

    // Check if the password is strong
    if (is_strong_password(password)) {
        printf("Password is strong.\n");
    } else {
        printf("Password is weak.\n");
    }

    return 0;
}
