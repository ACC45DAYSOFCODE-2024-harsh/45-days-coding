#include <stdio.h>

int main() {
    int T, N, A;

    // Read the number of test cases
    scanf("%d", &T);

    // Process each test case
    for (int i = 0; i < T; i++) {
        // Read the values of N and A
        scanf("%d %d", &N, &A);

        // Calculate the minimum number of people to mask
        int non_infected = N - A;
        int result = (A < non_infected) ? A : non_infected;

        // Output the result
        printf("%d\n", result);
    }

    return 0;
}

