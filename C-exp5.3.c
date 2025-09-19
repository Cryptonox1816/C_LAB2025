#include <stdio.h>

int main() {
    int n, target, count = 0;

    // Step 1: Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read the elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Read the number to find frequency of
    printf("Enter the number to find its frequency: ");
    scanf("%d", &target);

    // Step 4: Count frequency
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    // Step 5: Display result
    printf("Frequency of %d is: %d\n", target, count);

    return 0;
}
