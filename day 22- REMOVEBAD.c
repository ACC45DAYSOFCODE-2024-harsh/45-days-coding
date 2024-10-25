#include <stdio.h>

#define MAX_N 100000

// Function to compute the minimum operations required
int min_operations_to_make_elements_same(int *array, int n) {
    int freq[MAX_N + 1] = {0};
    int max_frequency = 0;

    // Count frequencies of each element in the array
    for (int i = 0; i < n; i++) {
        freq[array[i]]++;
        if (freq[array[i]] > max_frequency) {
            max_frequency = freq[array[i]];
        }
    }

    // Minimum operations is the total length minus the maximum frequency
    return n - max_frequency;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int result = min_operations_to_make_elements_same(A, N);
        printf("%d\n", result);
    }

    return 0;
}


