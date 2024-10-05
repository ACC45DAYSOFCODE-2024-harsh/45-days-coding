#include <stdio.h>

const char* is_pseudo_sorted(int arr[], int n) {
    int violations = 0;
    int violation_index = -1;

    // Check for violations
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            violations++;
            violation_index = i;
            if (violations > 1) {
                return "NO";
            }
        }
    }

    // If there are no violations
    if (violations == 0) {
        return "YES";
    }

    // There is exactly one violation at violation_index
    int i = violation_index;

    // Check if swapping arr[i] and arr[i + 1] can fix the order
    // Swap them hypothetically
    if (i == 0 || arr[i - 1] <= arr[i + 1]) {
        if (i + 1 == n - 1 || arr[i] <= arr[i + 2]) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Size of the array
        int A[N];

        // Read the array elements
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // Check if the array is pseudo-sorted
        printf("%s\n", is_pseudo_sorted(A, N));
    }

    return 0;
}


