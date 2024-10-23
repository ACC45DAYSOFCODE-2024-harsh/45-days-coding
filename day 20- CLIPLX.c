#include <stdio.h>

int main() {
    int T, X, Y, W;
    
    // Read number of test cases
    scanf("%d", &T);
    
    // Iterate through each test case
    while (T--) {
        // Read X and Y
        scanf("%d %d", &X, &Y);
        
        // Calculate the minimum number of wins needed
        W = X - Y;
        if (W < 0) {
            W = 0;
        }
        
        // Output the result
        printf("%d\n", W);
    }
    
    return 0;
}
