#include <stdio.h>
#include <string.h>

void len(char string[100]) {
    printf("string length : %d",strlen(string));
}

void main() {
    char string[100];
    printf("Enter any string: ");
    scanf("%s", &string);
    len(string);
}