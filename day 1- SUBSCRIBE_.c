#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N, X; // N: number of friends, X: cost of one subscription
        scanf("%d %d", &N, &X);
        
        // Calculate the number of subscriptions needed
        int subscriptions_needed = (N + 5) / 6; // Equivalent to ceil(N / 6)
        
        // Calculate total cost
        int total_cost = subscriptions_needed * X;
        
        // Print the result
        printf("%d\n", total_cost);
    }
    
    return 0;
}
