
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void rearrange_array(int N, int *A) {
    // Step 1: Sort the array
    qsort(A, N, sizeof(int), compare);

    // Step 2: Create result array
    int *result = (int *)malloc(N * sizeof(int));
    
    int left = 0, right = N - 1;

    // Step 3: Fill the result array
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            result[i] = A[left++];
        } else {
            result[i] = A[right--];
        }
    }

    // Print the result
    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free allocated memory
    free(result);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int *A = (int *)malloc(N * sizeof(int));

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        rearrange_array(N, A);

        // Free allocated memory for A
        free(A);
    }

    return 0;
}

