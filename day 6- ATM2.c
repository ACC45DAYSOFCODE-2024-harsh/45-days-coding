#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // number of people
        int K; // initial amount in ATM
        scanf("%d %d", &N, &K);

        int A[N]; // array to store withdrawal requests
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        char result[N + 1]; // array to store the result (1s and 0s)
        for (int i = 0; i < N; i++) {
            if (A[i] <= K) {
                result[i] = '1'; // successful withdrawal
                K -= A[i]; // deduct the amount from K
            } else {
                result[i] = '0'; // unsuccessful withdrawal
            }
        }
        result[N] = '\0'; // null-terminate the string

        printf("%s\n", result); // print the result for the current test case
    }

    return 0;
}
