#include <stdio.h>

int max_frequency(int arr[], int n) {
    int frequency[11] = {0};  // To store the frequency of numbers from 1 to 10 (since 1 <= Ai <= 10)
    
    // Count the frequency of each number in the array
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    
    // Find the maximum frequency
    int max_freq = 0;
    for (int i = 1; i <= 10; i++) {
        if (frequency[i] > max_freq) {
            max_freq = frequency[i];
        }
    }
    
    return max_freq;
}

int main() {
    int T;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N;
        
        // Read the number of cards
        scanf("%d", &N);
        
        int A[N];
        
        // Read the numbers on the cards
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        // Find the maximum frequency
        int max_freq = max_frequency(A, N);
        
        // Calculate the minimum number of moves
        int min_moves = N - max_freq;
        
        // Output the result
        printf("%d\n", min_moves);
    }
    
    return 0;
}


