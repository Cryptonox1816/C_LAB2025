#include <stdio.h>

// Recursive function to calculate nth Fibonacci number
int FIBO(int num) {
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int limit;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &limit);

    printf("Fibonacci sequence up to %d terms:\n", limit);
    for (int i = 0; i < limit; i++) {
        printf("%d ", FIBO(i));
    }

    return 0;
}
