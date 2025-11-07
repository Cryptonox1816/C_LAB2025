#include <stdio.h>

int main() {
    FILE *fp;  // File pointer

    // Open file in write mode
    fp = fopen("example.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Could not create file!\n");
        return 1; // Exit with error code
    }

    // Write text into the file
    fprintf(fp, "Hello Kartikey! This is a new file created using C.\n");
    fprintf(fp, "You can add multiple lines of text here.\n");

    // Close the file
    fclose(fp);

    printf("File created and text written successfully.\n");
    return 0;
}
