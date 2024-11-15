#include <stdio.h>

void total_duration(int T, int test_cases[][3]) {
    for (int t = 0; t < T; t++) {
        int N = test_cases[t][0];  // Number of episodes
        int A = test_cases[t][1];  // Duration of even-indexed episodes
        int B = test_cases[t][2];  // Duration of odd-indexed episodes
        
        // Calculate the number of odd and even indexed episodes
        int odd_count = (N + 1) / 2;  // Odd indexed episodes
        int even_count = N / 2;       // Even indexed episodes
        
        // Total duration calculation
        int total_duration = (odd_count * B) + (even_count * A);
        
        // Output the result for this test case
        printf("%d\n", total_duration);
    }
}

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);
    
    // Array to hold the test cases, each containing N, A, B
    int test_cases[T][3];
    
    // Read the input for each test case
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &test_cases[i][0], &test_cases[i][1], &test_cases[i][2]);
    }
    
    // Call the function to calculate total durations
    total_duration(T, test_cases);
    
    return 0;
}
