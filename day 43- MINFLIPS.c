#include <stdio.h>
#include <stdlib.h>

void solve() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    while (T--) {
        int N;
        scanf("%d", &N);  // Read the length of the array
        int sum = 0;
        
        // Read the array and calculate its sum
        for (int i = 0; i < N; i++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }
        
        // Check if the sum is even or odd
        if (sum % 2 != 0) {
            printf("-1\n");  // If the sum is odd, it's impossible
        } else {
            // If the sum is even, the minimum flips needed is half the absolute sum
            printf("%d\n", abs(sum) / 2);
        }
    }
}

int main() {
    solve();  // Solve the problem
    return 0;
}
