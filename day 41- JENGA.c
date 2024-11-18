#include <stdio.h>

int main() {
    int T, N, X;

    // Read the number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int i = 0; i < T; i++) {
        // Read N and X for each test case
        scanf("%d %d", &N, &X);

        // Check if X is divisible by N
        if (X % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
