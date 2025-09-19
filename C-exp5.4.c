#include <stdio.h>

int main() {
    int m, n, p, q;

    // Step 1: Read dimensions of Matrix A
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    // Step 2: Read dimensions of Matrix B
    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Step 3: Check compatibility
    if (n != p) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Reason: Columns of A (%d) ≠ Rows of B (%d)\n", n, p);
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Step 4: Read Matrix A
    printf("\nEnter elements of Matrix A (%d x %d) in row-major order:\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Step 5: Read Matrix B
    printf("\nEnter elements of Matrix B (%d x %d) in row-major order:\n", p, q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Step 6: Multiply A and B to get C
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Step 7: Print Matrix A
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d ", A[i][j]);
        printf("\n");
    }

    // Step 8: Print Matrix B
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++)
            printf("%4d ", B[i][j]);
        printf("\n");
    }

    // Step 9: Print Resultant Matrix C
    printf("\nProduct Matrix C (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%4d ", C[i][j]);
        printf("\n");
    }

    return 0;
}
