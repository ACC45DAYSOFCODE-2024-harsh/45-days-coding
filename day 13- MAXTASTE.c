#include <stdio.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int T;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int a, b, c, d;
        
        // Read the tastiness values of the four ingredients
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        // Calculate the maximum possible tastiness
        int result = max(max(a + c, a + d), max(b + c, b + d));
        
        // Output the result for the current test case
        printf("%d\n", result);
    }
    
    return 0;
}
