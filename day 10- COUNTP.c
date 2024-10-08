#include <stdio.h>

int main() {
    int T;
    // Read number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, countOdd = 0, totalSum = 0;
        // Read the size of the array
        scanf("%d", &N);
        
        // Iterate through the array
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);
            
            // Add to the total sum
            totalSum += num;
            
            // Count odd numbers
            if (num % 2 != 0) {
                countOdd++;
            }
        }
        
        // Check the conditions
        if (totalSum % 2 == 0 && countOdd > 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}