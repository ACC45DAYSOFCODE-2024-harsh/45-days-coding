#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B); // Read the values for each test case

        int first_valuation = 10 * A;   // Valuation by first investor
        int second_valuation = 5 * B;   // Valuation by second investor

        // Compare the two valuations and print the appropriate result
        if (first_valuation > second_valuation) {
            printf("FIRST\n");
        } else if (second_valuation > first_valuation) {
            printf("SECOND\n");
        } else {
            printf("ANY\n");
        }
    }

    return 0;
}
