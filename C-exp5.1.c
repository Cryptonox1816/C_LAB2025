#include <stdio.h>

int main() {
    int n;

    // Step 1: Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read elements into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Initialize largest and second largest
    int largest = arr[0];
    int secondLargest = -2147483648; // INT_MIN

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    // Step 4: Display result
    if (secondLargest == -2147483648) {
        printf("No second largest element found (all elements may be equal).\n");
    } else {
        printf("Second largest element is: %d\n", secondLargest);
    }

    return 0;
}
