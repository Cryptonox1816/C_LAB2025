#include <stdio.h>

int main() {
    FILE *fp;          // File pointer
    char buffer[256];  // Buffer to store each line

    // Open file in read mode
    fp = fopen("example.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1; // Exit with error code
    }

    // Read file line by line
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);  // Print each line
    }

    // Close the file
    fclose(fp);

    printf("\nFile reading completed.\n");
    return 0;
}
