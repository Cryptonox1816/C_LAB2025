#include <stdio.h>

int main() {
    FILE *fp;   // File pointer
    char ch;    // Variable to store each character

    // Open file in read mode
    fp = fopen("example.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1; // Exit with error code
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // Print each character to console
    }

    // Close the file
    fclose(fp);

    printf("\nFile reading completed.\n");
    return 0;
}
