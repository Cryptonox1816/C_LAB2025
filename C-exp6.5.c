#include <stdio.h>
#include <string.h>

// Function to reverse a string in-place
void REVERSE(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char input[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", input);  // Note: This reads up to the first space

    // Call the REVERSE function
    REVERSE(input);

    // Output reversed string
    printf("Reversed string: %s\n", input);

    return 0;
}
