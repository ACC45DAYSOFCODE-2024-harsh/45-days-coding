#include <stdio.h>

void solve() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        long long N;
        scanf("%lld", &N);  // Read the value of N for this test case
        
        // Calculate the count of odd and even numbers
        long long odd_count = (N + 1) / 2;  // odd_count is the number of odd numbers from 1 to N
        long long even_count = N / 2;       // even_count is the number of even numbers from 1 to N
        
        // Calculate the number of valid pairs (A, B) such that A + B is odd
        long long result = 2 * odd_count * even_count;
        
        // Print the result for this test case
        printf("%lld\n", result);
    }
}

int main() {
    solve();  // Call the solve function to process all test cases
    return 0;
}