#include <stdio.h>
#include <limits.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // number of test cases in this test
        scanf("%d", &N);
        
        int S[N]; // array to store the sizes of test cases
        for (int i = 0; i < N; i++) {
            scanf("%d", &S[i]);
        }
        
        char V[N+1]; // binary string representing pass/fail, with an extra space for null terminator
        scanf("%s", V);
        
        // Variable to keep track of the smallest failed test case size
        int smallest_failed = INT_MAX;
        
        // Loop through the binary string and sizes to find the smallest failed case
        for (int i = 0; i < N; i++) {
            if (V[i] == '0') { // If the test case failed
                if (S[i] < smallest_failed) {
                    smallest_failed = S[i]; // Update smallest failed size
                }
            }
        }
        
        // Output the smallest failed test case size
        printf("%d\n", smallest_failed);
    }
    
    return 0;
}
