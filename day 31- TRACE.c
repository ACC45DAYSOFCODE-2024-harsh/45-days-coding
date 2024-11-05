#include <stdio.h>

int max_trace_of_submatrix(int n, int matrix[n][n]) {
    int diagonal_sums[2 * n - 1]; // Array to store sums for diagonals
    int max_trace = 0;

    // Initialize the array with zeros
    for (int i = 0; i < 2 * n - 1; i++) {
        diagonal_sums[i] = 0;
    }

    // Calculate the sum of elements for each diagonal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int d = i - j + (n - 1); // Shift index to handle negatives
            diagonal_sums[d] += matrix[i][j];
        }
    }

    // Find the maximum trace among all diagonals
    for (int i = 0; i < 2 * n - 1; i++) {
        if (diagonal_sums[i] > max_trace) {
            max_trace = diagonal_sums[i];
        }
    }

    return max_trace;
}

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        int n;
        scanf("%d", &n); // Read the matrix size

        int matrix[n][n];
        
        // Read the matrix elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        // Calculate and print the maximum trace for the current matrix
        int result = max_trace_of_submatrix(n, matrix);
        printf("%d\n", result);
    }

    return 0;
}
