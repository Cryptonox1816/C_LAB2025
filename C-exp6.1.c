#include <stdio.h>

// Recursive factorial
long FACT_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * FACT_recursive(n - 1);
}

// Non-recursive factorial
long FACT_non_recursive(int n) {
    long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// Binomial coefficient using non-recursive factorial
long BINOMIAL(int n, int r) {
    return FACT_non_recursive(n) / (FACT_non_recursive(r) * FACT_non_recursive(n - r));
}

int main() {
    printf("Binomial Coefficient Table (C(n, r))\n");
    printf("------------------------------------\n");
    printf("  n   |  r   |  C(n, r)\n");
    printf("------------------------\n");

    for (int n = 0; n <= 10; n++) {
        for (int r = 0; r <= n; r++) {
            printf("  %2d  |  %2d  |  %6ld\n", n, r, BINOMIAL(n, r));
        }
    }

    return 0;
}
